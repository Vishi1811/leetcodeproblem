class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int jump=0;
        while(r<n-1)
        {
            int fartherest=0;
            for(int i=l;i<=r;i++)
            {
                fartherest=max(fartherest,i+nums[i]);

            }
            jump++;
            l=r+1;
            r=fartherest;
        }
        return jump;
    }
};