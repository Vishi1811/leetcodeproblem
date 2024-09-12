class Solution {
public:
    bool search(vector<int>& nums, int key) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==key)return true;
            if(nums[mid]==nums[low]&& nums[mid]==nums[high])
            {
                low++;
                high--;
                continue;
            }
            else if (nums[low]<= nums[mid] )
            {
                if(nums[low]<=key && key<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else 
            {
                if(nums[mid]<=key && key<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return false;
    }
};