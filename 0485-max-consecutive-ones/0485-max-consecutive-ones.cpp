class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=1)
            {
                cnt=0;

            }
            else 
            {
                cnt++;
                len=max(len,cnt);
            }
        }
        return len;

    }
};