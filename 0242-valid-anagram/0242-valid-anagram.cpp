class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t? true:false;
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        // Increment for `s` and decrement for `t`
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            freq[t[i]]--;
        }

        // Check if all counts are zero
        for (auto [key, value] : freq) {
            if (value != 0) return false;
        }

        return true;
        
    }
};