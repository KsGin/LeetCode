/*
 * File Name : BaseballGame
 * Author    : KsGin
 * Date      : 9/26/2017
 */

#ifndef LEETCODE_BASEBALLGAME_H
#define LEETCODE_BASEBALLGAME_H

#include <string>
#include <vector>

class BaseballGame {
public:
    int calPoints(std::vector<std::string> ops) {
        if (ops.size() == 0) return 0;

        std::vector<int> nums(0);
        for (int i = 0; i < ops.size(); ++i) {
            if(ops[i][0] == '+'){
                nums.push_back(nums[nums.size()-1] + nums[nums.size()-2]);
            }else if(ops[i][0] == 'C'){
                nums.erase(nums.end()-1);
            }else if(ops[i][0] == 'D'){
                nums.push_back(nums[nums.size()-1]*2);
            }else{
                nums.push_back(atoi(ops[i].c_str()));
            }
        }

        int ret = 0;
        for (auto num : nums) {
            ret += num;
        }

        return ret;
    }
};

#endif //LEETCODE_BASEBALLGAME_H
