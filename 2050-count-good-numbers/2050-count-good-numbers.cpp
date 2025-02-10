class Solution {
public:
    const long long MOD = 1000000007;

// Recursive function for modular exponentiation
long long mod_exp(long long x, long long n) {
    if (n == 0) return 1;  // Base case: x^0 = 1

    long long half = mod_exp(x, n / 2) % MOD;  // Compute x^(n/2) recursively
    long long result = (half * half) % MOD;    // Square the result

    if (n % 2 == 1) {  // If n is odd, multiply by x
        result = (result * x) % MOD;
    }
    return result;
}

// Main function to count good numbers
int countGoodNumbers(long long n) {
    long long even = (n + 1) / 2;  // Number of even indices
    long long odd = n / 2;         // Number of odd indices

    long long eindex = mod_exp(5, even) % MOD;  // Compute 5^even % MOD
    long long oindex = mod_exp(4, odd) % MOD;   // Compute 4^odd % MOD

    return (eindex * oindex) % MOD;  // Final result under MOD
}
};