class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int n=s.size();
        int maxfreq=0;
        int hash[26]={0};
        int l=0,r=0;
        while(r<n)
        {
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            int change=(r-l+1)-maxfreq;
            if(change<=k)maxlen=max(maxlen,(r-l+1));
            else
            {
                while(change>k && l<r)
                {
                    hash[s[l]-'A']--;
                    l++;
                    maxfreq=0;
                    for(int i=0;i<26;i++)
                    {
                        maxfreq=max(maxfreq,(hash[i]));
                    }
                    change=(r-l+1)-maxfreq;
                }
            }
            r++;
        }
        return maxlen;
        
    }
};