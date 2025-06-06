class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ss = nums.size();
        int count,max_count;
        count = max_count = 0;
        for(int i = 0;i<ss; i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                if(count>max_count)
                {
                    max_count = count;
                }
                count = 0;
            }
        }
        if(count>max_count)
            return count;
        else
            return max_count;
    }
};