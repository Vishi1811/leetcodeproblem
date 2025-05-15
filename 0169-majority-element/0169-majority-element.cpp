class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                m=nums[i];
            }
            else if(m==nums[i])
            {
                cnt++;
            }
            else 
            {
                cnt--;
            }
        }
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(m==nums[i])cnt++;
        }
        if((n/2)<cnt)return m;
        return 0;
    }
};