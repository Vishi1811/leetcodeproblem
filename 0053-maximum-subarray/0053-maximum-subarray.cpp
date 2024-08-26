class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        cin.tie(0);
        ios::sync_with_stdio(0);
        int sum=0,maxi=INT_MIN;
        for(auto it:nums)
        {
            sum+=it;
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
        
    }
};