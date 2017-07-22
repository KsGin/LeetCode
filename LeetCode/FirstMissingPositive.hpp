#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class FirstMissingPositive {
public:
	int firstMissingPositive(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		auto res = 0;
		auto i = 0;  
        while (i<nums.size() && nums[i]<=0) i++;  
        for (; i < nums.size(); i++)
        {
            if (i>0 && nums[i] == nums[i-1]) continue;
            if (nums[i] - res != 1) return res+1;
            else res = nums[i];
        }  
        return res+1;  
	}

	int firstMissingPositive2(int A[], int n) {
		for (auto i = 0; i<n; i++)
		{
			if (A[i] > 0 && A[i] < n)
			{
				//if (A[i]-1 != i && A[A[i]-1] != A[i])������ô�������Ϳ����ˡ�  
				//��ΪֻҪ���Ѿ���λ�˵�Ԫ�ؼ���A[i]-1==i�ˣ���ô�ж�������ظ�Ԫ��  
				//����λ�ý�������ÿ��Ǻ�����λ�ó��ֵĿ����������������ȫ�棬�������������Ǻá�  
				//update:����i!=A[i]��ʾiλ��û��λ��A[A[i]-1] != A[i]��ʾA[i]-1λ��û��λ������λ�ö��ж�Ҳ�ܺõġ�  
				if (A[A[i] - 1] != A[i])
				{
					swap(A[A[i] - 1], A[i]);
					i--;
				}
			}
		}

		for (auto j = 0; j<n; ++j)
			if (A[j] - 1 != j)
				return j + 1;

		return n + 1;
	}

};
