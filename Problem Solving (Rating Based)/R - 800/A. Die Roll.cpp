// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

// int main()
// {
//     int y, w;
//     cin >> y >> w;

//     int max_roll = max(y, w);

//     int numerator = 6 - max_roll + 1;
//     int denominator = 6;

//     int g = gcd(numerator, denominator);

//     numerator = numerator / g;
//     denominator = denominator / g;

//     cout << numerator << "/" << denominator << endl;
// }

// // GCD ব্যবহার করে সরল ভগ্নাংশ বের করা
// // gcd(numerator, denominator); দ্বারা ভগ্নাংশকে সরল করা হয়।









#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;  
    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> arr(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;  
        }
        
        
        vector<int> given = {0, 1, 0, 3, 2, 0, 2, 5}; 
        
        map<int, int> needed;
        for (int num : given) {
            needed[num]++;
        }

        map<int, int> current;
        int i;
        for (i = 0; i < n; i++) {
            current[arr[i]]++;  
            
            bool found = true;
            for (auto &mp : needed) {
                if (current[mp.first] < mp.second) {
                    found = false;
                    break;
                }
            }
            
            if (found) { 
                cout << i + 1 << endl;
                break;
            }
        }
        
        if (i == n) cout << "0" << endl; 
    }

   
}

