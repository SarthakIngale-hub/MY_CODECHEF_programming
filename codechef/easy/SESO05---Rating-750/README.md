# SESO05 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Miscellaneous Linear Search

Given  **n**  pairs of integers, write a program to check if there exists any pair that contains both integers  **a**  and  **b**  in any order.

### Input Format
- The first line contains an integer $n$, the number of pairs.
- The next $n$ lines each contain two space-separated integers representing a pair.
- The last line contains two integers $a$ and $b$.
### Output Format
- Print "Yes" if there exists any pair that contains both integers a and b in any order.
- Print "No" if no such pair exists.
### Sample 1:
Input
Output

```
4
2 3
4 5
3 5
1 7
5 3
```

```
Yes
```

### Sample 2:
Input
Output

```
4
2 3
4 5
3 5
1 7
5 9
```

```
No
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T16:37:01.316Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    int a, b;
    cin >> a >> b;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x = pairs[i].first;
        int y = pairs[i].second;

        if ((x == a && y == b) || (x == b && y == a)) {
            found = true;
            break; 
        }
    }
    
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO05)