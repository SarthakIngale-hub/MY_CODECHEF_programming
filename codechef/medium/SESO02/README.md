# SESO02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Real life implementation
### How Linear Search Works:
- Start from the first element of the list.
- Compare the current element with the target element.
- If a match is found, return the position.
- If no match, move to the next element.
- Repeat until the target is found or the end of the list is reached.
- If the target is not found, the search is unsuccessful.
### Example in a List:

Let's say you have a list of numbers, and you want to find the number $6$:

List: [4,1,6,8]

- Start with the first element (4). Is it 6? No.
- Move to the next element (1). Is it 6? No.
- Move to the next element (6). Is it 6? Yes. You've found the number 6.
- In this example, it took three comparisons to find the number 6.
### Task
- Given the program to check $7$ is present or not, print Yes if $7$ is present in the array.
- Analyze the code for linear search and submit.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T13:20:00.392Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int array[] = {3, 5, 2, 9, 7, 1};
    int length = sizeof(array) / sizeof(array[0]);
    bool found = false;

    for (int i = 0; i < length; ++i) {
        if (array[i] == 7) {
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

[View on CodeChef](https://www.codechef.com/problems/SESO02)