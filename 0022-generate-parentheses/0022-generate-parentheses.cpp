class Solution {
public:
    void helper(int index,vector<string>&ans,int n,string s="",int open=0,int close=0)
    {
        if(open>n)return ;
        if(close>open)return;
        if(index==2*n && open==close)
        {
            ans.push_back(s);
            return;
        }
        helper(index+1,ans,n,s+"(",open+1,close);
        helper(index+1,ans,n,s+")",open,close+1);

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(0,ans,n);
        return ans;
          
    }
};