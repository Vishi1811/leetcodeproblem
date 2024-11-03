class Solution {
public:
    void rotate(string &s,int n)
    {
        char temp = s[n - 1];  
        for (int i = n - 1; i > 0; i--) {
            s[i] = s[i - 1];
        }
        s[0] = temp;
    }
    bool rotateString(string s, string goal) {
        int n=s.size();
        int noOfRotation=n;
        while(noOfRotation--)
        {
            rotate(s,n);
            if(s==goal)return true;
        }
        return false;
        
    }
};