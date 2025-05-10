class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ssum = 0;
        int ss = nums.size();
        int sum = ss*(ss+1)/2;

        for(int i = 0;i<ss;i++)
        {
            ssum += nums[i];
        }

        return (sum-ssum);
    }
};