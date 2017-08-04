
/**
 * File : JumpGame2
 * Author : KsGin 
 * Date : 2017/8/4.
 */

//

#ifndef LEETCODE_JUMPGAME2_HPP
#define LEETCODE_JUMPGAME2_HPP

#include <vector>

using namespace std;

class JumpGame2 {
public:
    int jump(vector<int> &nums) {
        int n = (int) nums.size();
        int minstep = 0;
        int ldist = 0;
        int hdist = 0;
        if (n == 1) return 0;
        while (ldist <= hdist) {
            ++minstep;
            int lasthdist = hdist;
            for (int i = ldist; i <= lasthdist; ++i) {
                int possibledist = i + nums[i];
                if (possibledist >= n - 1)
                    return minstep;
                if (possibledist > hdist) {
                    hdist = possibledist;
                }
            }
            ldist = lasthdist + 1;
        }
        return 0;
    }
};

#endif //LEETCODE_JUMPGAME2_HPP
