class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=1,cnt=0;
        if(nums.size()==0)return 0;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:nums)
        {
            int x;
            if(st.find(it-1)==st.end())
            {
                cnt=1;
                x=it;
            }
            while(st.find(x+1)!=st.end())
            {
                cnt++;
                x=x+1;

            }
            maxlen=max(maxlen,cnt);
        }
        return maxlen;

        
    }
};