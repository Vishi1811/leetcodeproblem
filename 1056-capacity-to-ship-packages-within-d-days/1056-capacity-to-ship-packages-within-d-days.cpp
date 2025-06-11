class Solution {
    private:
    int totalSum(vector<int>arr)
    {
        int ans=0;
        for(auto it:arr)
        {
            ans+=it;
        }
        return ans;
    }
   
    int totalDays(vector<int>&arr,int w)
    {
        int days=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(sum+arr[i]<=w)sum+=arr[i];
            else
            {
                days++;
                sum=arr[i];
            }
            
        }
        return days+1;

    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int high=totalSum(weights);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(totalDays(weights,mid)<= days)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};