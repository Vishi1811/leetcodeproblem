class Solution {
public:
    int countSubarry(vector<int>&arr,int t)
    {
        int l=0,r=0;
        int n=arr.size();
        if(t<0)return 0;
        int sum=0,cnt=0;

        while(r<n)
        {
            sum+=arr[r];
            if(sum<=t)cnt+=(r-l+1);
            else 
            {
                while(sum>t)
                {
                    sum-=arr[l];
                    l++;
                }
                cnt+=(r-l+1);
            }
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal<0)return 0;
        return countSubarry(nums,goal)-countSubarry(nums,goal-1);
    }
};