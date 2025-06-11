class Solution {
    int findMax(vector<int>&arr)
    {
        int ans=INT_MIN;
        for(auto it:arr)
        {
            ans=max(ans,it);
        }
        return ans;
    }
    long long timeTaken(vector<int>&piles,int x)
    {
        long long  ans=0;
        for(int i=0;i<piles.size();i++)
        {
            ans+=ceil((double)piles[i]/(double)x);
        }
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            if(timeTaken(piles,mid)<=h)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};