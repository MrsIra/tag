#include "ctest.h"
#include "CheckWin.h"

CTEST (CheckWin, correct_win_combination)
{
	int board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10,
			11, 12}, {13, 14, 15, 0}};
	ASSERT_EQUAL(0, CheckWin(board[][]));
}

CTEST(CheckWin, random_correct_combination)
{
	int board[4][4] = {{13, 3, 10, 4}, {2, 14, 9, 1},
			{15, 6, 12, 5}, {7, 11, 8, 0}};
	ASSERT_EQUAL(0, CheckWin(board[][]));
}

CTEST(CheckWin, random_uncorrect_combination)
{
	int board[4][4] = {{13, 3, 10, 4}, {2, 6, 9, 1},
			{15, 14, 12, 5}, {7, 11, 8, 0}};
	ASSERT_EQUAL(1, CheckWin(board[][]));
}

CTEST(CheckWin, uncorrect_15_14_combination)
{
	board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10,
			11, 12}, {13, 15, 14, 0}};
	ASSERT_EQUAL(1, CheckWin(board[][]));
}

CTEST(CheckWin, correct_win_combination)
{
	int board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10,
			11, 12}, {13, 14, 15, 0}};
	ASSERT_EQUAL(1, CheckWin(board[][]));
}

CTEST(CheckWin, uncorrect_win_combination)
{
	int board[4][4] = {{2, 1, 3, 4}, {5, 6, 7, 8}, {9, 10,
			11, 12}, {13, 14, 15, 0}};
	ASSERT_EQUAL(0, CheckWin(board[][]));
}
