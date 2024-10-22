class Solution {
public:
    double myPow(double x, int n) {
        bool sign=0;
        double ans=1;
        if(n<0)
        {
            sign=1;
            ans*=x;
            n=-(n+1);
        }
       
        while(n>0)
        {
            if(n%2){
                ans=ans*x;
                n=n-1;
            }
            n=n/2;
            x=x*x;
        }
        return sign==1? 1/ans:ans;
        
    }
};