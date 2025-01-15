class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 ||n==1)return n;
        int maxlen=0;
        vector<int>hash(256,-1);
        
        int l=0,r=0;
        while(r<n)
        {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l)
                l=hash[s[r]]+1;

            }
            maxlen=max(maxlen,(r-l+1));
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};