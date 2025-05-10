class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // vector<vector<int>>ans;
        // int i,j,k,l;
        // i=0;
        // l=n-1;
        // sort(nums.begin(),nums.end());
        // while(i<l)
        // {
        //     j=i+1;
        //     k=l-1;
        //     bool flag=0;
        //     while(j<k)
        //     {
        //         if(nums[i]+nums[j]+nums[k]+nums[l]>target)
        //         {
        //             k--;
        //         }
        //         else if (nums[i]+nums[j]+nums[k]+nums[l]<target)
        //         {
        //             j++;
        //         }
        //         else
        //         {
        //             vector<int>temp{nums[i],nums[j],nums[k],nums[l]};
        //             ans.push_back(temp);
        //             j++;
        //             k--;
        //             while(nums[j]==nums[j-1] && j<k){j++; flag=1;}
        //             while(nums[k]==nums[k+1] && j<k){k--; flag = 0;}
        //         }
        //     }
        //     // if(((k+1)!=l))k++;
        //     // else if(((j-1)!=i))j--;
        //     if(flag==1 && (j-1)!=i)
        //     {
        //         j--;
        //     }
        //     else if(flag==0 && (k+1)!=l){
        //         k++;
        //     }
            
        //     if(nums[i]+nums[j]+nums[k]+nums[l]>target)
        //         {
        //             l--;
        //             // while(nums[l]==nums[l+1] && l<n-1 && i<l)l--;
        //         }
        //     else if (nums[i]+nums[j]+nums[k]+nums[l]<target)
        //         {
        //             i++;
        //             // while(nums[i]==nums[i-1] && i>0 && i<l)i++;
        //         }
        //     else
        //         {
        //             i++;
        //             l--;
        //             while(nums[i]==nums[i-1] && i>0 && i<l)i++;
        //             while(nums[l]==nums[l+1] && l<n-1 && i<l)l--;
        //         }
        // }

        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(j!=(i+1)&&(nums[j]==nums[j-1]))
                {
                    continue;
                }
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target)
                    {
                        vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }

        return ans;
    }
};