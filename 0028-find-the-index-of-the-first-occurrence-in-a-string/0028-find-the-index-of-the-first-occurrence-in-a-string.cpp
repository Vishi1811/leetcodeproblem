class Solution {
public:
     void findlps(vector<int>&lps,string s)
    {
        int n=lps.size();
        int pre=0,suff=1;
        while(suff<n)
        {
            if(s[pre]==s[suff])
            {
                lps[suff]=pre+1;
                pre++;
                suff++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suff]=0;
                    suff++;
                }
                else
                {
                    pre=lps[pre-1];

                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        vector<int>lps(m);
        findlps(lps,needle);
        int first=0,second=0;
        while(first<n && second<m)
        {
           
            if(haystack[first]==needle[second])
            {
                first++;
                second++;
            }
            else
            {
                if(second==0)first++;
                else second=lps[second-1];
            }
            
        }
        if(second==m)return first-second;
        return -1;
    }
};