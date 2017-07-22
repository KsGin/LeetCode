#pragma once
#include <vector>
#include <cstring>

using namespace std;

class SudokuSolver {
public:
	int n;
	int h[9][10], v[9][10], b[9][10];
	void solveSudoku(vector<vector<char>>& board) {
		n = board.size();
		// 初始化h,v,b三个数字，将已经出现的数字进行处理
		memset(h, 0, sizeof(h));
		memset(v, 0, sizeof(v));
		memset(b, 0, sizeof(b));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (board[i][j] != '.') {
					h[i][board[i][j] - '0'] = true;
					v[j][board[i][j] - '0'] = true;
					b[i / 3 * 3 + j / 3][board[i][j] - '0'] = true;
				}
		// 以回溯的方式枚举所有可能的方案，从左上角开始枚举
		solve(0, 0, board);
	}
	bool solve(int i, int j, vector<vector<char>>& a) {
		// 当已经枚举完整个棋盘时，说明已经构成了一组解
		if (i == n) {
			return true;
		}
		// 枚举到一行的最后一列时，跳转到下一行的第一列进行枚举
		if (j == n) {
			return solve(i + 1, 0, a);
		}
		// 如果是已经存在的数字，则进行跳过
		if (a[i][j] != '.') return solve(i, j + 1, a);
		// 否则枚举这个格子可能出现的数字
		for (int k = 1; k <= 9; k++) {
			// 检查以避免出现相同的数字
			if (!h[i][k] && !v[j][k] && !b[i / 3 * 3 + j / 3][k]) {
				// 将(i, j)处设置为k，并更新h,v,b数组
				a[i][j] = '0' + k;
				h[i][k] = true; v[j][k] = true; b[i / 3 * 3 + j / 3][k] = true;
				// 枚举下一个格子
				if (solve(i, j + 1, a)) return true;
				// 恢复造成的修改，以进行下一种可能的枚举或者进行回溯
				h[i][k] = false; v[j][k] = false; b[i / 3 * 3 + j / 3][k] = false;
				a[i][j] = '.';
			}
		}
		// 如果所有方案都不可行说明之前的方案存在问题，进行回溯
		return false;
	}
};