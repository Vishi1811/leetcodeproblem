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



        /*third method ,this is slighly better of second because in the second method if n>10^5 then in computation of n*n+1 lead to 10^10 that can not store by int data type having said that tc and sc are same as second*  but for this question second is best because 0<n<=10^4
        int xor1=0,xor2=0;
        for(int i=0;i<nums.size();i++)
        {
            xor1=xor1^(i+1);
            xor2=xor2^nums[i];
        }
        return (xor1^xor2);
    }*/
    }
};