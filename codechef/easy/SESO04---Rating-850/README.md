# SESO04 - Rating 850

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Linear Search in string

Given a string and a character as input, print the first position of the character in the string if it is present. If the character does not exist in the string, print " **-1** ".

### Input Format
- The first line contains a string.
- The second line contains a single character.
### Output Format
- Print the first position (0-based index) of the character in the string if it is present.
- Print "-1" if the character is not present in the string.
### Sample 1:
Input
Output

```
HelloHowYouDoing
w
```

```
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T16:33:58.088Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string str;
    cin>>str;
    char key;
    cin>>key;
    for(int i = 0;i < str.length();i++){
        if(str[i] == key){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO04)