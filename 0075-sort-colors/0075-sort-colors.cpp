class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int start=-1,mid=0,end=n-1;
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                start++;
                swap(nums[start],nums[mid]);
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[end]);
                end--;
            }
            else mid++;

        }
    }
};