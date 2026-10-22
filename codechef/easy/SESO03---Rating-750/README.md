# SESO03 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Linear Search in array

Write a program to search for a specific element in an array and print " **Yes** " if the element is present, otherwise print " **No** ".

### Input Format
- The first line contains an integer $n$, the length of the array and $k$, the element to be search.
- The second line contains $n$ space-separated integers representing the elements of the array.
### Output Format
- Print "Yes" if the element $k$ is present in the array.
- Print "No" if the element $k$ is not present in the array.
### Sample 1:
Input
Output

```
8 1
3 5 1 4 5 6 5 6
```

```
Yes
```

### Sample 2:
Input
Output

```
3 4
1 2 3
```

```
No
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T13:27:33.709Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

bool linear_search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(linear_search(arr,n,k)) cout<<"Yes";
    else cout<<"No";
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO03)