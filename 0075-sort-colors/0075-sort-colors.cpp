class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=-1,k=0,j=nums.size()-1;
        while(k<=j)
        {
            if(nums[k]==1)
            {
                 k++;
            }
            else if(nums[k]==2)
            {
                
                swap(nums[k],nums[j]);
                j--;
                
            }
            else
            {
                i++;
                swap(nums[i],nums[k]);
                k++;
                
            }
        }
        
    }
};