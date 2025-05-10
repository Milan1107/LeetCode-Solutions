class Solution {
public:
    void findSubset(int ind, vector<int>& nums, vector<int>& ds, set<vector<int>>& result_set) {
        
        if(ind == nums.size()) {
            result_set.insert(ds);
            return;
        }

        findSubset(ind + 1, nums, ds, result_set);

        ds.push_back(nums[ind]);
        findSubset(ind + 1, nums, ds, result_set);
 
        ds.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>> result_set;
        vector<int> ds;
        findSubset(0, nums, ds, result_set);
        vector<vector<int>> result(result_set.begin(), result_set.end());
        return result;
    }
};
