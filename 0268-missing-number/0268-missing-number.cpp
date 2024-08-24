class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //first method->tc=O(nlogn),sc=O(1)
        // sort(nums.begin(),nums.end());
        // int i=0,j=nums.size();
        // while(i<j)
        // {
        //     if(nums[i]!=i)
        //     {
        //         return i;
        //     }
        //     i++;
        // }
        // return j;
        //secnod method tc=O(n),sc=O(1);
        int sum=0,n=nums.size();
        sum=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            sum=sum-nums[i];
        }
        return sum;

        

        
    }
};