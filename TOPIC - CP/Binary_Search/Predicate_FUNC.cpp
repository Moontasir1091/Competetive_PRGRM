/*
**What is Predicate Function?
==>> A funtion that returns only true/false is called PREDICATE_FUNCTION.
**We can apply Binary search in MONOTONIC PREDICATE_FUNCTION.
** What is MONOTONIC PREDICATE_FUNCTION?
==>> F F F T T T T  (OR) T T T T F F F F
that have consistancy bhvr.


BS in Predicate Function:-

1. We have to create monotonic predicate function... 
   that returns all TRUE before a perticular point and returns all FALSE after that perticular point or Vice versa.
   E.i : ==>> F F F . T T T T  (OR) T T T T . F F F F
   let we've given  F F F . T T T T .

2. We have to find (last F) or (First T) in this Sequence Using  Binary Search.
3. we are going to find Mid . Finding First TRUE::::---> if mid==false we can find First True (F F F . T T T T) that lied right side after Mid.
    and if mid==true then First True can be MID and lied left side before MID.


    this solution LIKE Upper Bound /// lower bound Problem.

    So Using Binary seacrch we gonna Find First True or last False or First False or first False



*/


/*
** What is a Predicate Function?
==>> A function that returns only `true` or `false` is called a **PREDICATE FUNCTION**.

** Monotonic Predicate Function:
==>> A predicate function that maintains a consistent behavior:
      - F F F T T T T 
      - T T T T F F F F 

** Applying Binary Search in a Predicate Function:

1. We need a **monotonic predicate function** that returns all `true` before a certain point 
   and all `false` after that point (or vice versa).
   Example:
       - F F F . T T T T  
       - T T T T . F F F F  

2. We must find either the **last `false`** or the **first `true`** using **Binary Search**.

3. Applying Binary Search:
   - Compute `mid = (low + high) / 2`
   - If `predicate(mid) == false`, then the first `true` lies **after** mid → Move to the right half.
   - If `predicate(mid) == true`, then the first `true` could be **mid** or before it → Move to the left half.

4. This approach is similar to **Lower Bound / Upper Bound** problems.

5. Using Binary Search, we can find:
   - First `True`
   - Last `False`
   - First `False`
   - Last `True`

   A Monotonic Predicate Function follows a specific pattern:

F F F T T T → (Find First True or Last False)

T T T F F F → (Find First False or Last True)

*/

// #include <iostream>
// using namespace std;

// // Example predicate function
// bool predicate(int x) {
//     return x >= 10;  // Returns true for x >= 10
// }

// // Function to find the first occurrence of `true`
// int findFirstTrue(int low, int high) {
//     while (low < high) {
//         int mid = low + (high - low) / 2;
//         if (predicate(mid)) {
//             high = mid;  // Move left to find the first true
//         } else {
//             low = mid + 1;  // Move right as mid is false
//         }
//     }
//     return low;
// }

// int main() {
//     int result = findFirstTrue(0, 20);
//     cout << "First True is at index: " << result << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
long long n,m;
long long trees[N];

bool is_wood_sufficient(int h) {
        long long wood = 0;
        for(int i=0; i<n;++i){
            if(trees[i] >= h){
                wood += (trees[i]-h);
            }
        }
        return wood >= m;
    }
int main(){
     cin >> n >> m;
    for(int i = 0; i < n; ++ i){
        cin >> trees[i];
    }
    long long lo = 0, hi = 1e9 , mid; // hi means maximum height.

    /// In this tree cutting prblm; our predicate function look like TTTTFFF
    while(hi - lo > 1){
        mid = (hi+lo)/2;
        if(is_wood_sufficient(mid)){
            lo = mid;
        }
        else{
            hi = mid - 1;
        }

    }

    if(is_wood_sufficient(hi)){
        cout << hi << endl;
    }
    else{
        cout << lo << endl;
    }
}