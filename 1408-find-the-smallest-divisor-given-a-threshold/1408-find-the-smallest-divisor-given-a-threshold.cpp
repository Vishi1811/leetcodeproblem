class Solution {
    private:
    int findMax(vector<int>&arr)
    {
        int ans=INT_MIN;
        for(auto it:arr)
        {
            ans=max(ans,it);
        }
        return ans;
    }
    int divisorResult(vector<int>&nums,int d)
    {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
             res+=ceil((double)nums[i]/(double)d);
        }
        return res;
    }
public:

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1,high=findMax(nums);
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(divisorResult(nums,mid)<=threshold)high=mid-1;
            else low=mid+1;
        }
        return low;
        
    }
};