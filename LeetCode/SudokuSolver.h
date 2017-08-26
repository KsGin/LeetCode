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
		// ��ʼ��h,v,b�������֣����Ѿ����ֵ����ֽ��д���
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
		// �Ի��ݵķ�ʽö�����п��ܵķ����������Ͻǿ�ʼö��
		solve(0, 0, board);
	}
	bool solve(int i, int j, vector<vector<char>>& a) {
		// ���Ѿ�ö������������ʱ��˵���Ѿ�������һ���
		if (i == n) {
			return true;
		}
		// ö�ٵ�һ�е����һ��ʱ����ת����һ�еĵ�һ�н���ö��
		if (j == n) {
			return solve(i + 1, 0, a);
		}
		// ������Ѿ����ڵ����֣����������
		if (a[i][j] != '.') return solve(i, j + 1, a);
		// ����ö��������ӿ��ܳ��ֵ�����
		for (int k = 1; k <= 9; k++) {
			// ����Ա��������ͬ������
			if (!h[i][k] && !v[j][k] && !b[i / 3 * 3 + j / 3][k]) {
				// ��(i, j)������Ϊk��������h,v,b����
				a[i][j] = '0' + k;
				h[i][k] = true; v[j][k] = true; b[i / 3 * 3 + j / 3][k] = true;
				// ö����һ������
				if (solve(i, j + 1, a)) return true;
				// �ָ���ɵ��޸ģ��Խ�����һ�ֿ��ܵ�ö�ٻ��߽��л���
				h[i][k] = false; v[j][k] = false; b[i / 3 * 3 + j / 3][k] = false;
				a[i][j] = '.';
			}
		}
		// ������з�����������˵��֮ǰ�ķ����������⣬���л���
		return false;
	}
};