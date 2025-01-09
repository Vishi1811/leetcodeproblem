class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(k==n)return "0";
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && (st.top()-'0'>num[i]-'0') && k>0)
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0)
        {
            st.pop();
            k--;

        }
        if(st.empty())return "0";
        string s="";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        while(s.size()>0 && s.back()=='0')s.pop_back();
        if(s.empty())return "0";
        reverse(s.begin(),s.end());
        return s;
    }

};