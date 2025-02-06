class Solution {
public:
    double helper(double x,long long n)
    {
        if(n==0)return 1;
        if(n%2==1)return x*helper(x,n-1);
        return helper(x*x,n/2);
        
    }
    double myPow(double x, int n) {
        long long N = n;  // Convert to long long to prevent overflow
        if (n < 0) {
            return 1.0 / helper(x, -N);
        }
        return helper(x, N);
        
    }
};