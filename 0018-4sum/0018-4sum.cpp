class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int l=i+1;l<n-2;l++)
            {
                if(l > i + 1 && nums[l] == nums[l - 1]) continue;
                int j=l+1,k=n-1;
                long long  sum=0;
                sum+=nums[i]+nums[l];
                while(j<k)
                {
                    sum+=nums[j];
                    sum+=nums[k];
                    if(sum<target) j++;
                    else if(sum>target) k--;

                    else
                    {
                        ans.push_back({nums[i],nums[l],nums[j],nums[k]});
                        j++;
                        k--;
                        while(nums[j]==nums[j-1] && j<k)j++;
                        while(nums[k]==nums[k+1] && j<k)k--;
                        
                    }
                    sum=nums[i]+nums[l];
                }
            }

        }
        return ans;
    }
};