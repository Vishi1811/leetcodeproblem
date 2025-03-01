class Solution {
public:
    int countPrimes(int n) {
         if (n < 2) return 0;
        vector<int>prime(n+1,1);
        prime[0] = 0;  // 0 is not prime
        prime[1] = 0;
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=0;
                }
            }
        }
        int cnt=0;
        for (int i = 2; i <n; i++) {  // Start from 2 since 0 and 1 are not prime
            if (prime[i] == 1) cnt++;
        }
        return cnt;
    }
};