class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)cnt=0;
            else {
                cnt++;
                maxcount=max(cnt,maxcount);
            }
        }
        return maxcount;
    }
};