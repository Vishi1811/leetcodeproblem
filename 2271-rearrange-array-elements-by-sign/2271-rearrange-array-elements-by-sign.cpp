class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size();
        vector<int>ans(n,0);
        int pi=0,ni=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[ni]=nums[i];
                ni+=2;
            }
            else
            {
                ans[pi]=nums[i];
                pi+=2;
            }
        }
        return ans; 
    }
};