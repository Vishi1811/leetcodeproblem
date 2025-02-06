class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if (n == 0) return 0;

        int i = 0;

        // Step 1: Ignore leading whitespace
        while (i < n && s[i] == ' ') i++;

        // Step 2: Check if we have reached the end of the string
        if (i == n) return 0;

        // Step 3: Handle the sign
        int sign = 1;
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;  // Move past the sign
        }

        // Step 4: Process the digits
        long ans = 0;
        while (i < n && (s[i] >= '0' && s[i] <= '9')) {
            int digit = s[i] - '0';

            // Step 5: Check for integer overflow before updating ans
            if (ans > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return static_cast<int>(sign * ans);
    }
};