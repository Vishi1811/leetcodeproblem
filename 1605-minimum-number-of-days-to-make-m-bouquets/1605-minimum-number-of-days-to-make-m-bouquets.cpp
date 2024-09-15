class Solution {
public:
    vector<int> min_max(vector<int>&arr,int n)
    {
      
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        return {mini,maxi};
    }
    int noOfbouquet(vector<int>&arr,int day,int k,int n)
    {
        int cnt=0;
        int totalbloom=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=day) cnt++;
            else{
                totalbloom+=(cnt/k);
                cnt=0;
            }
        }
        totalbloom +=(cnt/k);
        return totalbloom;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if(val>n)return -1;
        vector<int>a=min_max(bloomDay,n);
        int low =a[0];
        int high=a[1];
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
           
            if(noOfbouquet(bloomDay,mid,k,n)>=m)
            {
                high=mid-1;
            
            }
                else low=mid+1;
        }
        
        return low;
    }
};