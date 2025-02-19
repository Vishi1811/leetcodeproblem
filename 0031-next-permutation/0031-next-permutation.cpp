class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
        if(index==-1) {
            reverse(nums.begin(),nums.end());
            return;}
        for(int i=n-1;i>=index;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+(index+1),nums.end());
    }
};