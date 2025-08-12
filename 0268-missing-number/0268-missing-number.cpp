class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            ans=ans^i;
            ans=ans^nums[i-1];
        }
        return ans;
    }
};