
/**
 * File : Permutations
 * Author : KsGin 
 * Date : 2017/8/5.
 */

//

#ifndef LEETCODE_PERMUTATIONS_HPP
#define LEETCODE_PERMUTATIONS_HPP

#include <vector>

using namespace std;

template <typename T> void swap(T& a , T& b){
    T c = a;
    a = b;
    b = c;
}

class Permutations  {
public:

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        int n = nums.size();
        if (n == 0){
            ret.push_back(vector<int>());
            return ret;
        }


        sub_permute(ret , nums , n-1);

        return ret;
    }

    void sub_permute(vector<vector<int>> &ret, vector<int> &nums, int n) {
        if (n == 0){
            ret.push_back(nums);
        }

        for (int i = 0; i <= n; ++i) {
            swap(nums[i] , nums[n]);
            sub_permute(ret , nums , n-1);
            swap(nums[i] , nums[n]);
        }
    }

};

#endif //LEETCODE_PERMUTATIONS_HPP
