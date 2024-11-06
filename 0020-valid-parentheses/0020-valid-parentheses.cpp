class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            else
            {
                if (st.empty()) return false;  // Check if stack is empty before accessing top
                if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || 
                    (s[i] == ']' && st.top() == '[')) st.pop();
               else return false;  
            
    
            }

        }
        return st.empty();
        
    }
};