#define MOD 1000000007

// O(log n) Binary Exponentiation
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) { // Bitwise odd check
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1; // Divide by 2
    }
    return res;
}

int countGoodNumbers(long long n) {
    long long ans = power(20, n / 2);

    // If n is odd, multiply by the remaining even position's 5 choices
    if (n % 2 != 0) {
        ans = (ans * 5) % MOD;
    }

    return (int)ans;
}