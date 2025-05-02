class Solution {
private:
    int reverse(int n)
    {
        int rev=0;
        while(n>0)
        {
            if(rev>INT_MAX/10)return 0;
            rev=rev*10+n%10;
            n=n/10;
        }
        return rev;
    }
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int n=reverse(x);
        if(n==x)return true;
        return false;
        
    }
};