class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        int longest=0;
        for(auto it:nums)
        {
            st.insert(it);
        }
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end())
                {
                    cnt+=1;
                    x+=1;

                }
                longest=max(cnt,longest);
            }
        }
        return longest;
        
    }
};