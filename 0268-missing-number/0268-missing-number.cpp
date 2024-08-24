class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size();
        while(i<j)
        {
            if(nums[i]!=i)
            {
                return i;
            }
            i++;
        }
        return j;
        

        
    }
};