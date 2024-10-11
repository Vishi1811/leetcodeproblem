class Solution {
public:
    int divide(int dividend, int divisor) {
       
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        // Determine the sign of the result
        bool sign = (dividend < 0) == (divisor < 0);
        
        // Use long long to handle overflow issues with abs()
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;
        
        // Long division approach using bit manipulation
        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
            ans += (1LL << cnt); // Ensure long long type
            n -= (d << cnt);
        }
        
        // Apply the sign
        ans = sign ? ans : -ans;
        
        // Clamp the result to the valid range of 32-bit signed integers
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;
        
        return ans;
    }
};