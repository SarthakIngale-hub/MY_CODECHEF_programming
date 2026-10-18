# Nth Digit

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return the `nth` digit of the infinite integer sequence `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,...]`.

 

 **Example 1:** 

```
Input: n = 3
Output: 3

```

 **Example 2:** 

```
Input: n = 11
Output: 0
Explanation: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,... is a 0, which is part of the number 10.

```

 

 **Constraints:** 

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 92.70%)  
**Submitted:** 2026-10-18T14:20:24.256Z  

```cpp
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

```

---

[View on LeetCode](https://leetcode.com/problems/nth-digit/)