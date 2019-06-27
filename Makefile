COMPILER = gcc

FLAGS = -Wall -Werror

.PHONY: clean all

all: bin/main

-include build/*.d

bin/main: build/main.o build/CheckWin.o build/random.o build/print.o
	$(COMPILER) $(FLAGS) -o $@ $^
build/main.o: src/main.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<
build/CheckWin.o: src/CheckWin.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<
build/random.o: src/random.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<
build/print.o: src/print.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

test: bin/main-test

-include build/*.d

bin/main-test: build/main_t.o build/test_t.o build/CheckWin.o
	$(COMPILER) $(FLAGS) -o $@ $^

build/main_t.o: test/main.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

build/test_t.o: test/ctest.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

clean:
	rm build/*
