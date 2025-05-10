class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        else{
            sort(nums.begin(),nums.end());
            int plcscnt,lcscnt;
            plcscnt=lcscnt=1;
            
            for(int i=1;i<n;i++)
            {
                
                if(nums[i]==nums[i-1])
                {
                    continue;
                }
                else
                {
                    if(nums[i]-nums[i-1]==1)
                    {
                        lcscnt+=1;
                    }
                    else 
                    {
                        
                        plcscnt = max(lcscnt,plcscnt);
                        lcscnt = 1;
                        
                    }
                }
            }
            return max(plcscnt,lcscnt);
        }
    }
};