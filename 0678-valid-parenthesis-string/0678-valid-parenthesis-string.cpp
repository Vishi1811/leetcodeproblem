class Solution {
public:
    bool checkValidString(string s) {
         int n = s.size();
        int min = 0, max = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                min++;
                max++;
            } else if (s[i] == ')') {
                min--;
                max--;
            } else{
                min--;  // Treat '*' as ')'
                max++;  // Treat '*' as '('
            }
        
            if (max < 0) return false;
            if (min < 0) min = 0;
        }
        return min == 0;
            
    }
};