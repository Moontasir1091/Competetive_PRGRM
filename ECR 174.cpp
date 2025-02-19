// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     long long arr[n+10][m+10];
//     map<long long, int> freq;  // map to store the frequency of elements

//     // Reading the array and updating frequencies
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> arr[i][j];
//             freq[arr[i][j]]++;  // incrementing frequency of each element
//         }
//     }

//     // Calculate total sum of frequencies
//     int totalFreq = 0;
//     int maxFreq = 0;

//     for (auto& entry : freq) {
//         totalFreq += entry.second;  // sum of all frequencies
//         maxFreq = max(maxFreq, entry.second);  // find maximum frequency
//     }

//     // Subtract the maximum frequency from total
//     totalFreq -= maxFreq;

//     cout <<  totalFreq << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


int arr[10100];

int func()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
        cin >> arr[i];
    for (int i = 4; i < n; i++)
    {
        if (arr[i - 2] == 1 && arr[i - 1] == 0 && arr[i] == 1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        func();
    }
    return 0;
}
