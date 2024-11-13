class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
           auto a = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
           auto b = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]);
           cnt += (b - a);
        }
        return cnt;
    }
};