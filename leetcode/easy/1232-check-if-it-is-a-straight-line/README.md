# Check If It Is a Straight Line

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `coordinates`, `coordinates[i] = [x, y]`, where `[x, y]` represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

 **Example 1:** 

```
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

```

 **Example 2:** 

```
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false

```

 

 **Constraints:** 

- 2 <= coordinates.length <= 1000
- coordinates[i].length == 2
- -10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
- coordinates contains no duplicate point.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.9 MB (beats 98.81%)  
**Submitted:** 2026-10-25T04:53:19.968Z  

```cpp
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        int dx = x1 - x0;
        int dy = y1 - y0;

        for (int i = 2; i < coordinates.size(); ++i) {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];

            if (dy * (xi - x0) != (yi - y0) * dx) {
                return false;
            }
        }
        
        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/check-if-it-is-a-straight-line/)