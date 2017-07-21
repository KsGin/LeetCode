#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class CombinationSum {
public:
	std::vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
		vector<vector<int> > allSol;
		vector<int> sol;
		if (candidates.empty()) return allSol;
		sort(candidates.begin(), candidates.end());
		findCombSum(candidates, 0, target, sol, allSol);
		return allSol;
	}

	void findCombSum(vector<int> &candidates, int start, int target, vector<int> &sol, vector<vector<int>> &allSol) {
		if (target == 0) {
			allSol.push_back(sol);
			return;
		}

		for (int i = start; i<candidates.size(); i++) {
			if (i>start && candidates[i] == candidates[i - 1]) continue;
			if (candidates[i] <= target) {
				sol.push_back(candidates[i]);
				findCombSum(candidates, i, target - candidates[i], sol, allSol);
				sol.pop_back();
			}
		}
	}
};
