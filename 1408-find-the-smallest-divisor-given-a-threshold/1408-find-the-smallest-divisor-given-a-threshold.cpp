class Solution {
public:
    int findMax(vector<int>&arr,int n)
    {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
    int sumAfterDivison(vector<int>&arr,int n,int divisor)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=ceil((double)arr[i]/(double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=findMax(nums, n);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(sumAfterDivison(nums, n,mid)<=threshold) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};