class Solution {
private:
    int findMax(vector<int>&nums)
    {
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>maxi)maxi=nums[i];

        }
        return maxi;
    }
    int findMin(vector<int>&nums)
    {
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<mini)mini=nums[i];

        }
        return mini;
    }
public:
    int findGCD(vector<int>& nums) {
        int a=findMin(nums);
        int b=findMax(nums);
        while(a>0 && b>0)
        {
            if(a>b)a=a%b;
            else b=b%a;

        }
        if(a==0)return b;
        return a;
    }
};