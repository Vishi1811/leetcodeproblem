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
    int arraySum(vector<int>&arr,int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
    int requiredDay(vector<int>&arr,int n,int capacity)
    {
        int days=1,load=0;
        for(int i=0;i<n;i++)
        {
            if(load+arr[i]>capacity)
            {
                load=arr[i];
                days++;
            }
            else load+=arr[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
            int n=weights.size();
        int low=findMax(weights, n);
        int high=arraySum(weights, n);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(requiredDay(weights,n,mid)<=days)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};