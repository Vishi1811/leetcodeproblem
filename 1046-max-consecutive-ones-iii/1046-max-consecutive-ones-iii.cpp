class Solution {
public: 

    int longestOnes(vector<int>& nums, int k) {
        int zc=0;
        int maxl=0;
        int l=0,r=0;
        int n=nums.size();
        while(r<n)
        {
            if(nums[r]==0)zc++;
            while(zc>k)
            {
                if(nums[l]==0)zc--;
                l++;
            }
                maxl=max(maxl,(r-l+1));
                r++;
        }
        return maxl;
    }
};