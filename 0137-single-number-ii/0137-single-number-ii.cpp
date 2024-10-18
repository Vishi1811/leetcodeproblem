class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Approch-1
        // int ans=0;
        // for (int bitIndex=0;bitIndex<32;bitIndex++)
        // {
        //     int cnt=0;
        //     for(int i=0;i<nums.size();i++)
        //     {
        //         if(nums[i]&(1<<bitIndex))cnt++;
        //     }
        //     if(cnt%3==1)ans|=(1<<bitIndex);
        // }
        // return ans;

        //Approch:2
        
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<n;i+=3)
        // {
        //     if(nums[i]!=nums[i-1])return nums[i-1];
        // }
        // return nums[n-1];

        //Approch:3

        int ones=0,twices=0;
        for(int i=0;i<nums.size();i++)
        {
            ones=(ones^nums[i])&(~twices);
            twices=(twices^nums[i])&(~ones);
        }
        return ones;
    }
};