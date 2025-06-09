class Solution {
    int firstOccurrence(vector<int>& nums, int x,int n)
    {
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==x)
            {
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>x)high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
    int lastOccurrence(vector<int>& nums,int x,int n)
    {
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==x)
            {
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]>x)high=mid-1;
            else low=mid+1;
        }
        return ans;
    
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstOccurrence(nums,target,n);
        if(first==-1)return {-1,-1};
        int last=lastOccurrence(nums,target, n);
        return {first,last};
    }
};