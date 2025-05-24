class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int cnt=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=sum-k;
            cnt+=mp[rem];
            mp[sum]+=1;
        }
        return cnt;
    }
};