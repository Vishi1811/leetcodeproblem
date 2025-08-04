class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int i=0;
        string ans="";
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                if(st.empty())st.push(s[i]);
                else
                {
                    ans+=s[i];
                    st.push(s[i]);
                }

            }
            else 
            {
                st.pop();
                if(!st.empty())
                {

                    ans+=s[i];
                }

            
            }
            i++;
        }
        return ans;
    }
};