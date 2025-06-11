class Solution {
    private:
    int findMin(vector<int>&arr)
    {
        int ans=INT_MAX;
        for(auto it:arr)
        {
            ans=min(ans,it);
        }
        return ans;
    }
    int findMax(vector<int>&arr)
    {
        int ans=INT_MIN;
        for(auto it:arr)
        {
            ans=max(ans,it);
        }
        return ans;
    }
    int totalBoquests(vector<int>&bloomDay,int  day,int k)
    
    {
        int cnt=0;
        int ans=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)cnt++;
            else
            {
                ans+=cnt/k;
                cnt=0;
            }
        }
        ans+=cnt/k;
        return ans;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n/k<m)return -1;
        int low=findMin(bloomDay);
        int high=findMax(bloomDay);
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(totalBoquests(bloomDay,mid,k)>=m)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};