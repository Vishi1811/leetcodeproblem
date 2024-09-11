class Solution {
public:
    int lowerBound(vector<int>&nums,int n ,int k)
    {
        int ans=n;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>=k)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>&nums,int n,int k )
    {
        int ans=n;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>k)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerBound(nums,nums.size(),target);
        if(lb==nums.size() || nums[lb]!=target )return {-1,-1};
        return {lb,upperBound(nums,nums.size(),target)-1};
        
    }
};