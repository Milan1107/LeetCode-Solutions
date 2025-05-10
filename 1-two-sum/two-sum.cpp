class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>targetIndices(0);
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    targetIndices.push_back(i);
                    targetIndices.push_back(j);
                    return targetIndices;
                }
            }
        }
        return targetIndices;
    }
};