# Consecutive Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The  **power**  of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string `s`, return  *the  **power**  of*  `s`.

 

 **Example 1:** 

```
Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

```

 **Example 2:** 

```
Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.

```

 

 **Constraints:** 

- 1 <= s.length <= 500
- s consists of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.5 MB (beats 51.15%)  
**Submitted:** 2026-10-25T05:14:25.985Z  

```cpp
class Solution {
public:
    int maxPower(string s) {
        if (s.empty()) return 0;
        
        int max_len = 1;
        int current_len = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {

                current_len = 1;
            }
        }
        
        return max_len;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/consecutive-characters/)