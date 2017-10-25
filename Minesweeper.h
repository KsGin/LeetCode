/*
 * File   : Minesweeper
 * Author : KsGin 
 * Date   : 25/10/2017
 */

#ifndef LEETCODE_MINESWEEPER_H
#define LEETCODE_MINESWEEPER_H

#include <vector>

class Minesweeper {
private:
    void update(std::vector<std::vector<char>> &board,
                std::vector<std::vector<bool>> &visited, int i, int j) {
        if (visited[i][j]) return;
        if (board[i][j] == 'M') {
            board[i][j] = 'X';
            visited[i][j] = true;
            return;
        }
        if (board[i][j] == 'E') {

            auto i_limit = static_cast<int>(board.size());
            auto j_limit = static_cast<int>(board[0].size());
            auto mine_cot = 0;

            if (i + 1 < i_limit) mine_cot += (board[i + 1][j] == 'M');
            if (i + 1 < i_limit && j > 0) mine_cot += (board[i + 1][j - 1] == 'M');

            if (j + 1 < j_limit) mine_cot += (board[i][j + 1] == 'M');
            if (i > 0 && j + 1 < j_limit) mine_cot += (board[i - 1][j + 1] == 'M');

            if (j > 0) mine_cot += (board[i][j - 1] == 'M');
            if (i > 0) mine_cot += (board[i - 1][j] == 'M');

            if (j > 0 && i > 0) mine_cot += (board[i - 1][j - 1] == 'M');
            if (j + 1 < j_limit && i + 1 < i_limit) mine_cot += (board[i + 1][j + 1] == 'M');

            if (mine_cot == 0) {
                board[i][j] = 'B';
                if (i + 1 < i_limit) update(board, visited, i + 1, j);
                if (j > 0 && i + 1 < i_limit) update(board, visited, i + 1, j - 1);
                if (j + 1 < i_limit) update(board, visited, i, j + 1);
                if (i > 0 && j + 1 < j_limit) update(board, visited, i - 1, j + 1);
                if (j > 0) update(board, visited, i, j - 1);
                if (i > 0) update(board, visited, i - 1, j);
                if (j > 0 && i > 0) update(board, visited, i - 1, j - 1);
                if (j + 1 < j_limit && i + 1 < i_limit) update(board, visited, i + 1, j + 1);
                return;
            }
            board[i][j] = static_cast<char>(mine_cot + '0');
        }
    }

public:
    std::vector<std::vector<char>> updateBoard(
            std::vector<std::vector<char>> &board,
            std::vector<int> &click) {
        std::vector<std::vector<bool>> visited(board.size(),
                                               std::vector<bool>(board[0].size(), false));
        update(board, visited, click[0], click[1]);
        return board;
    }
};

#endif //LEETCODE_MINESWEEPER_H
