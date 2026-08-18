class Solution {
public:

    long long countZeroes(long long x) {
        long long count = 0;

        while (x > 0) {
            x /= 5;
            count += x;
        }

        return count;
    }

    int preimageSizeFZF(int k) {
        long long low = 0;
        long long high = 5LL * (k + 1);

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long zeroes = countZeroes(mid);

            if (zeroes < k) {
                low = mid + 1;
            }
            else if (zeroes > k) {
                high = mid - 1;
            }
            else {
                return 5;
            }
        }

        return 0;
    }
};