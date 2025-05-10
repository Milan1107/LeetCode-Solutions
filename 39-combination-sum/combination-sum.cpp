class Solution {
    void findCombination(int ind, vector<int>& candidates, int target,vector<vector<int>>&res,vector<int>&ds)
    {
        if(ind==candidates.size())
        {
            if(target==0)
                res.push_back(ds);
            
            return ;
        }

        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            findCombination(ind,candidates,target-candidates[ind],res,ds);
            ds.pop_back();
        }
        findCombination(ind+1,candidates,target,res,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,candidates,target,ans,ds);
        return ans;
    }
};