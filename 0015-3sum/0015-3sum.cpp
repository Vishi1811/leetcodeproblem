class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1,k=n-1;
            long long  sum=0;
            sum+=nums[i];
            while(j<k)
            {
                sum+=nums[j];
                sum+=nums[k];
                if(sum<0) j++;
                else if(sum>0) k--;

                else
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] && j<k)j++;
                    while(nums[k]==nums[k+1] && j<k)k--;
                    
                }
                sum=nums[i];
            }
        }
        return ans;
    }
};