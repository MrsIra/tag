COMPILER = gcc

FLAGS = -Wall -Werror

.PHONY: clean all

all: bin/main

-include build/*.d

bin/main: build/main.o build/CheckWin.o build/random.o
	$(COMPILER) $(FLAGS) -o $@ $^
build/main.o: src/main.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<
build/CheckWin.o: src/CheckWin.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<
build/random.o: src/random.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

clean:
	rm build/*
