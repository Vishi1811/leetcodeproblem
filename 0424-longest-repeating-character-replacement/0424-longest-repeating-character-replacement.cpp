class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int n=s.size();
        int maxfreq=0;
        int hash[26]={0};
        int l=0,r=0;
        while(r<n)
        {
            hash[s[r] - 'A']++;  // Increment frequency of character at right pointer
            maxfreq = max(maxfreq, hash[s[r] - 'A']);  // Update maxfreq

            int change = (r - l + 1) - maxfreq;  // Calculate characters to replace

            if (change > k) {
                hash[s[l] - 'A']--;  // Remove character at left pointer
                l++;  // Move left pointer forward
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
        
    }
};