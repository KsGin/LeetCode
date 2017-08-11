
/**
 * File : RotateImage
 * Author : KsGin 
 * Date : 2017/8/11.
 */

#ifndef LEETCODE_ROTATEIMAGE_HPP
#define LEETCODE_ROTATEIMAGE_HPP

#include<vector>

using namespace std;

class RotateImage {
public:
    void rotate(vector<vector<int>> &matrix, size_t topleft, size_t bottomright) {
        for (size_t i = 0; i < bottomright - topleft; ++i) {
            int tmp = matrix[topleft][topleft + i];
            matrix[topleft][topleft + i] = matrix[bottomright - i][topleft];
            matrix[bottomright - i][topleft] = matrix[bottomright][bottomright - i];
            matrix[bottomright][bottomright - i] = matrix[topleft + i][bottomright];
            matrix[topleft + i][bottomright] = tmp;
        }
    }

    void rotate(vector<vector<int>> &matrix) {
        if (matrix.size() <= 0)
            return;
        size_t topleft = 0, bottomright = matrix.size() - 1;
        while (topleft < bottomright) {
            rotate(matrix, topleft, bottomright);
            ++topleft;
            --bottomright;
        }
    }
};

#endif //LEETCODE_ROTATEIMAGE_HPP
