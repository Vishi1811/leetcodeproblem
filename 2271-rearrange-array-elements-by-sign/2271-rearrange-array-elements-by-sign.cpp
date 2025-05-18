class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        int i=0,p=0,ng=0;
        while(i<n)
        {
            if(i%2==0)
            {
                nums[i]=pos[p];
                i++;
                p++;
            }
            else{
                nums[i]=neg[ng];
                ng++;
                i++;
            }
        }
        return nums;
        
    }
};