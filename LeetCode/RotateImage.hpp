
/**
 * File : RotateImage
 * Author : KsGin 
 * Date : 2017/8/11.
 */

#ifndef LEETCODE_ROTATEIMAGE_HPP
#define LEETCODE_ROTATEIMAGE_HPP

#include<vector>

using namespace std;

template <typename T> void swap(T& a , T& b){
    T c = a;
    a = b;
    b = c;
}

class RotateImage {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n < 2) return;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};

#endif //LEETCODE_ROTATEIMAGE_HPP
