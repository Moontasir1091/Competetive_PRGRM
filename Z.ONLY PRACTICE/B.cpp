// Subsequence minimum SUM;

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int test;
    cin >> test;
    while (test--) {
        int n, l, r;
        cin >> n >> l >> r;
        --l; 

        vector<long long> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        // Case 1: Sort from l to end (ascending order)
        vector<long long> brr = v;
        sort(brr.begin() + l, brr.end());

        // Case 2: Sort first r elements in descending order
        vector<long long> crr = v;
        sort(crr.begin(), crr.begin() + r, greater<long long>());

        // Calculate sum for both cases
        long long sum_brr = accumulate(brr.begin() + l, brr.begin() + r, 0LL);


        long long sum_crr = accumulate(crr.begin() + l, crr.begin() + r, 0LL);

        
        cout << min(sum_brr, sum_crr) << "\n"; 
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0); 

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n, l, r;
//         cin >> n >> l >> r;

//         vector<long long> v(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }

        
//         sort(v.begin(), v.end(), greater<long long>());

        
//         long long minimum_sum = 0;
//         int j = n - 1;

//         for (int i = 0; i < (r - l + 1); ++i)
//         {
//             if (j >= 0)
//             {
//                 minimum_sum += v[j];
//                 j--; 
//             }
//         }

//         cout << minimum_sum << "\n"; 
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, l ,r;
//     cin >> n >> l >> r;
//     vector<int>v(n);
//     for(int i=0;i<n;++i){
//         cin >> v[i];
//     }
//    sort(v.begin(), v.end(), greater<int>());

//    int minimum_sum = 0;
//    int j = n-1;
//    for(int i = l; i<=r; ++i){
//     minimum_sum += v[j];
//     v.pop_back();

//    }
//    cout << minimum_sum << endl;

// }