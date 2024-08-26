class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=0,count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[m]==nums[i]) count++;
            else count--;
            if(count==0)
            {
                m=i;
                count=1;
            }
        }
        return nums[m];
        
    }
};