class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned int ans=start^goal;
        int cnt=0;
        while(ans>0)
        {
            cnt+=(ans & 1);
            ans>>=1;
        }
        return cnt;
        
    }
};