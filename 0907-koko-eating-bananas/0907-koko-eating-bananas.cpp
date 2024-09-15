class Solution {
public:
    long long findMax(vector<int>&arr){
       
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    long long  calculateHr(vector<int>&arr,int m)
    {
       long long totalHr=0;
        for(int i=0;i<arr.size();i++)
        {
           totalHr += ceil((double)(arr[i]) / (double)(m));
        }
        return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findMax(piles);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(calculateHr(piles,mid)<=h)high=mid-1;
            else low=mid+1;
        }
        return low;
        
    }
};