class Solution {
public:
    int findMin(vector<int>&arr,int n)
    {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
    int arraySum(vector<int>&arr,int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
    int noOfSplit(vector<int>&arr,int n,int maxsum) 
    {
        int splitcnt=1;
        int splitsum=0;
        for(int i=0;i<n;i++)
        {
            if(splitsum+arr[i]<=maxsum)
            {
                splitsum+=arr[i];
            }
            else{
                splitcnt++;
                splitsum=arr[i];
            }
        }
        return splitcnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=findMin(nums,n);
        int high=arraySum(nums,n);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(noOfSplit(nums,n,mid)>k)low=mid+1;
            else high=mid-1;;
        }
        return low;
    }
};