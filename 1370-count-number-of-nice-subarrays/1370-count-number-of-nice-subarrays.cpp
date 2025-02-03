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
            sum+=(arr[r]%2);
            if(sum<=t)cnt+=(r-l+1);
            else 
            {
                while(sum>t)
                {
                    sum-=(arr[l]%2);
                    l++;
                }
                cnt+=(r-l+1);
            }
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countSubarry(nums,k)-countSubarry(nums,k-1);
    }
};