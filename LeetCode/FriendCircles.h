/*
 * File   : FriendCircles
 * Author : KsGin 
 * Date   : 27/10/2017
 */

#ifndef LEETCODE_FRIENDCIRCLES_H
#define LEETCODE_FRIENDCIRCLES_H

#include <vector>

class FriendCircles {
private:
    void visit(std::vector<std::vector<int>> &M ,std::vector<std::vector<int>> &v, int i, int j) {
        i = (i < 0) ? M.size() - 1 : i;
        j = (j < 0) ? M.size() - 1 : j;
        i = (i >= M.size()) ? 0 : i;
        j = (j >= M.size()) ? 0 : j;
        if (v[i][j] || !M[i][j])
            return;
        v[i][j] = 1;
        visit(M,v, i + 1, j);
        visit(M,v, i - 1, j);
        visit(M,v, i, j + 1);
        visit(M,v, i, j - 1);
    }

public:
    int findCircleNum(std::vector<std::vector<int>> &M) {
        int count = 0;
        std::vector<std::vector<int>> visited(M.size() , std::vector<int>(M.size() , 0));
        for (int i = 0; i < M.size(); ++i) {
            for (int j = i; j < M.size(); ++j) {
                if (M[i][j] && !visited[i][j]) {
                    count += 1;
                    visit(M,visited, i, j);
                }
            }
        }
        return count;
    }
};

#endif //LEETCODE_FRIENDCIRCLES_H
