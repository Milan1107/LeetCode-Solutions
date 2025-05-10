class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()>1)
        {
            if(nums[0]<nums[1])
        {
            return nums[0];
        }
        else{
            for(int i=0;i<nums.size()-1;i+=2)
            {
                if(nums[i]==nums[i+1])
                {
                    continue;
                }
                else{
                    return nums[i];
                }
            }
        }
        return nums[nums.size()-1];
        }
        else{
            return nums[0];
        }
    }
};