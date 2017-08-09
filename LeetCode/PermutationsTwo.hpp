
/**
 * File : PermutationsTwo
 * Author : KsGin 
 * Date : 2017/8/10.
 */


#ifndef LEETCODE_PERMUTATIONSTWO_HPP
#define LEETCODE_PERMUTATIONSTWO_HPP

#include <vector>
#include <set>

using namespace std;

template <typename T> void swap(T& a , T& b){
    T c = a;
    a = b;
    b = c;
}

class PermutationsTwo  {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> tmp;
        int n = nums.size();
        if (n == 0){
            return vector<vector<int>>();
        }

        sub_permute(tmp , nums , n-1);

        //vector<vector<int>> ret();
        //copy(tmp.begin(),tmp.end(),back_inserter(ret));

        return vector<vector<int>>(tmp.begin() , tmp.end());
    }

    void sub_permute(set<vector<int>> &ret, vector<int> &nums, int n) {
        if (n == 0){
            ret.insert(nums);
        }

        for (int i = 0; i <= n; ++i) {
            swap(nums[i] , nums[n]);
            sub_permute(ret , nums , n-1);
            swap(nums[i] , nums[n]);
        }
    }

};

#endif //LEETCODE_PERMUTATIONSTWO_HPP
