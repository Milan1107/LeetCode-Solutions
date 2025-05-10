class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // map<int,int>m;
        // vector<int>& arr = nums;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            // m.insert({i,nums[i]});
            arr[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[(i+k)%nums.size()] = arr[i];
        }
    }
};