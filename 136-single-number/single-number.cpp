class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int maxx = 10000;
        //  int ss = nums.size();
        // map<int,int>mpp;
        // for(int i=0;i<ss;i++)
        // {
        //     if(nums[i]<0)
        //     {
        //         mpp[maxx-nums[i]]++;
        //     }
        //     else
        //     {
        //         mpp[nums[i]]++;
        //     }
        // }
        // bool flag = 1;
        // for(int i=0;i<mpp.size();i++)
        // {
        //     if(mpp[i]!=1)
        //     {
        //         flag = 0;
        //     }
        // }
        // if(flag==1)
        // {
        //     return maxx;
        // }
        // else
        // {
        //     for(int i =0;i<mpp.size();i++)
        // {
        //     if(mpp[i]==1)
        //     {
        //         if(i>=10000)
        //         {
        //             return 10000-i;
        //         }
        //         else
        //         {
        //             return i;
        //         }
        //     }
        // }
        // }
        // return -1;
    
        int xorr=0;
        for(int i=0;i<nums.size();i++)
        {
            xorr = xorr^nums[i];
        }
        return xorr;
    }
};