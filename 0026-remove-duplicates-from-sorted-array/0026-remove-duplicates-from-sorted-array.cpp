class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[len]!=nums[i])
            {
                len++;
                nums[len]=nums[i];
            }
        }
        return len+1;
       
    }
};