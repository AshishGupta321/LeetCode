class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<char> isPrime(n, 1);
        int count = n / 2;  // 2 plus all odd candidates below n

        for (long long i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                for (long long j = i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = 0;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};