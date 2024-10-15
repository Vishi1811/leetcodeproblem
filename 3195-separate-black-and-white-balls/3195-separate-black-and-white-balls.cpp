class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt=0;
        long long step=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')cnt++;
            else step+=cnt;
        }
        return step;
    }
};