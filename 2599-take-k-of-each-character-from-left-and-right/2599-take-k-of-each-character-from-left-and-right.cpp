class Solution {
public:
    int takeCharacters(string s, int k) {
        int cnt[3]{};
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            ++cnt[s[i] - 'a'];
        }
        for (int x : cnt) {
            if (x < k) {
                return -1;
            }
        }
        int maximum = 0, j = 0;
        for (int i = 0; i < n; ++i) {
            int c = s[i] - 'a';
            --cnt[c];
            while (cnt[c] < k) {
                ++cnt[s[j++] - 'a'];
            }
            maximum = max(maximum, i - j+1);
    
        }
        return n-maximum;
    }
};