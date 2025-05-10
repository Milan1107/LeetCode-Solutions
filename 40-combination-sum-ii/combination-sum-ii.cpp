class Solution {
    void findCombination(int ind, vector<int>& candidates, int target, vector<int>& ans, set<vector<int>>& result) {
        if(target == 0) { 
            result.insert(ans); 
            return; 
        }
        if(ind == candidates.size()) return;

        for(int i = ind; i < candidates.size(); i++) {
            if(i > ind && candidates[i] == candidates[i - 1]) continue;
            
            if(candidates[i] <= target) {
                ans.push_back(candidates[i]);
                findCombination(i + 1, candidates, target - candidates[i], ans, result);
                ans.pop_back(); // backtrack
            }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> result;
        vector<int> ans;
        sort(candidates.begin(), candidates.end()); // Sort first to handle duplicates
        findCombination(0, candidates, target, ans, result);
        vector<vector<int>> final_res(result.begin(), result.end());
        return final_res;
    }
};
