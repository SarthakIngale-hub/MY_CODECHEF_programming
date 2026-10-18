# Ransom Note

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `ransomNote` and `magazine`, return `true` *if* `ransomNote` *can be constructed by using the letters from* `magazine` *and* `false` *otherwise*.

Each letter in `magazine` can only be used once in `ransomNote`.

 

 **Example 1:** 

```
Input: ransomNote = "a", magazine = "b"
Output: false

```

 **Example 2:** 

```
Input: ransomNote = "aa", magazine = "ab"
Output: false

```

 **Example 3:** 

```
Input: ransomNote = "aa", magazine = "aab"
Output: true

```

 

 **Constraints:** 

- 1 <= ransomNote.length, magazine.length <= 105
- ransomNote and magazine consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 57.98%)  
**Memory:** 11.7 MB (beats 88.38%)  
**Submitted:** 2026-10-18T14:16:39.546Z  

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charCounts[26] = {0};

        for (char c : magazine) {
            charCounts[c - 'a']++;
        }

        for (char c : ransomNote) {
            charCounts[c - 'a']--;

            if (charCounts[c - 'a'] < 0) {
                return false;
            }
        }
        
        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/ransom-note/)