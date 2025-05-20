class Solution {
    private:
    void reverse(vector<int>&arr,int s,int e)
    {
        while(s<=e)
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }

    }
    
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums,0,n-1);
            return;
        }
        for(int i=n-1;i>=ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums,ind+1,n-1);
    }
};