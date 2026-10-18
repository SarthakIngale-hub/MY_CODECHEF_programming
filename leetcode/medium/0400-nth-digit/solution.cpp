class Solution {
public:
    int findNthDigit(int n) {
        long long len = 1;      // Number of digits in the current group (1-digit, 2-digit...)
        long long count = 9;    // Total digits available in the current group
        long long start = 1;    // The starting number of the current group (1, 10, 100...)

        while (n > len * count) {
            n -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }

        long long targetNum = start + (n - 1) / len;

        string s = to_string(targetNum);
        return s[(n - 1) % len] - '0';
    }
};
