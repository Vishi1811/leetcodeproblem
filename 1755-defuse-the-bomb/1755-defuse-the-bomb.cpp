class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0)return ans;
        int s=1,e=k;
        int sum=0;
        if(k<0)
        {
            s=n+k;
            e=n-1;
        }
        for(int i=s;i<=e;i++)
        {
            sum+=code[i];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=sum;
            sum-=code[s%n];
            sum+=code[(e+1)%n];
            s++;
            e++;
        }
        return ans;
    }
};