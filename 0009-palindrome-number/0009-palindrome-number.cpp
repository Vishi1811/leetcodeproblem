class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int num=x;
        while(num>0)
        {
            if ((rev>INT_MAX/10)||(rev<INT_MIN/10))return false;
        
            rev=rev*10+num%10;
            num=num/10;
        }
        if(rev==x)return true;
        return false;
    }
        
};