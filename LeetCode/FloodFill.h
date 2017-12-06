/*
 * File   : FloodFill
 * Author : KsGin 
 * Date   : 2017/12/6
 */

#ifndef LEETCODE_FLOODFILL_H
#define LEETCODE_FLOODFILL_H

#include <vector>

class FloodFill {

    void Fill(std::vector<std::vector<int>> &image,
              std::vector<std::vector<bool>> &visited,
              int i, int j, int newColor, int cutValue) {
        if (i >= image.size() ||
            j >= image[i].size() ||
            i < 0 ||
            j < 0 ||
            image[i][j] != cutValue ||
            visited[i][j])
            return;
        int tmp = image[i][j];
        image[i][j] = newColor;
        visited[i][j] = true;
        Fill(image, visited, i + 1, j, newColor, cutValue);
        Fill(image, visited, i - 1, j, newColor, cutValue);
        Fill(image, visited, i, j + 1, newColor, cutValue);
        Fill(image, visited, i, j - 1, newColor, cutValue);
    }

public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>> &image, int sr, int sc, int newColor) {
        std::vector<std::vector<bool>> visited(image.size(), std::vector<bool>(image[0].size(), false));
        Fill(image, visited, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};

#endif //LEETCODE_FLOODFILL_H
