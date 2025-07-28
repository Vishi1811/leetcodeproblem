class Solution {
private:
    int revers(int x)
    {
        int n=0;
        while(x!=0)
        {
            if(n>INT_MAX/10 || n<INT_MIN) return 0;
            n=n*10+x%10;
            x=x/10;
        }
        return n;
    }
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(revers(x)==x)return true;
        return false;
        
    }
};