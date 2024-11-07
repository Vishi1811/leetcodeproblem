class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans="";
        int i=n-1;
        while(i>=0)
        {
            if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9')break;
            i--;
        }
        if(i<0)return ans;
        for(int j=0;j<=i;j++)
        {
            ans+=num[j];
        }
        return ans;
    }
};