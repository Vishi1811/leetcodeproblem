class Solution {
public:
    int findMin(vector<int>&arr,int n)
    {
        int mini=INT_MAX;
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(mini>arr[i])
            { 
                mini=arr[i];
                index=i;
            }
        }
        return index;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        while(k--)
        {
            int minindex=findMin(nums,n);
            nums[minindex]*=multiplier;

        }
        return nums;
        
    }
};