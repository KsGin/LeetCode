#pragma once
#include <vector>

using namespace std;

class ValidSudoku {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		return isValidSudokuRow(board) && isValidSudokuCol(board) && isValidSudokuSub(board);
	}

	bool isValidSudokuRow(vector<vector<char>>& board)
	{
		for (auto i = 0 ; i < board.size() ; i++)
		{
			auto isAppear = vector<bool>(10, false);
			for (auto j = 0 ; j < board[i].size() ; j++)
			{
				auto tmp = board[i][j];
				if (tmp == '.')
					continue;
				if (!isAppear[tmp - 48])
				{
					isAppear[tmp - 48] = true;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}

	bool isValidSudokuCol(vector<vector<char>>& board)
	{
		for (auto i = 0; i < board[0].size(); i++)
		{
			auto isAppear = vector<bool>(10, false);
			for (auto j = 0; j < board.size(); j++)
			{
				auto tmp = board[j][i];
				if (tmp == '.')
					continue;
				if (!isAppear[tmp - 48])
				{
					isAppear[tmp - 48] = true;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}

	bool isValidSudokuSub(vector<vector<char>>& board)
	{
		for (auto i = 0 ; i < board.size() ; i+=3)
		{
			for (auto j = 0 ; j < board[i].size() ; j+=3)
			{
				auto isAppear = vector<bool>(10, false);
				for (auto r = i ; r < i+3 ; r++)
				{
					for (auto c = j; c<j+3;c++)
					{
						auto tmp = board[r][c];
						if (tmp == '.')
							continue;
						if (!isAppear[tmp - 48])
						{
							isAppear[tmp - 48] = true;
						}
						else
						{
							return false;
						}
					}
				}
			}
		}
		return true;
	}
};