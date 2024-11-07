class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++)
        {
            string temp = "";
            int len = min(ans.size(), strs[i].size());
            int k = 0;

            while (k < len && ans[k] == strs[i][k]) {
                temp += ans[k];
                k++;
            }
            ans = temp; 
            if (ans.empty()) break; 
        }
        return ans;
    }
};