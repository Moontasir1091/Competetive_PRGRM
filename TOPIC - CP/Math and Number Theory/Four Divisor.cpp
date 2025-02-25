// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     vector<vector<int>> vec(n);  // প্রতিটি সংখ্যার জন্য ডায়নামিক ভেক্টর

//     for (int i = 0; i < n; ++i) {
//         cin >> v[i];
//     }

//     int i = 0;
//     while (i < n) {
//         int cnt = 0;
//         for (int j = 1; j * j <= v[i]; ++j) {
//             if (v[i] % j == 0) {
//                 cnt++;
//                 vec[i].push_back(j); // `j` সংরক্ষণ করছি
                
//                 if (j != (v[i] / j)) {
//                     cnt++;
//                     vec[i].push_back(v[i] / j); // `v[i] / j` সংরক্ষণ করছি
//                 }
//             }
//         }

//         if (cnt == 4) {
//             cout << v[i] << " ";
//         }
//         i++;
//     }

//     cout << endl;  // সুন্দরভাবে ফরম্যাট করার জন্য

//     for (int p = 0; p < n; ++p) {
//         if(vec[p].size() == 4) { // শুধুমাত্র ৪টি ডিভাইসর থাকলে যোগফল বের করবো
//             int sum = 0;
//             for(int q = 0; q < 4; ++q){
//                 sum += vec[p][q];
//             }
//             cout << "Sum of divisors of " << v[p] << " = " << sum << endl;
//         }
//     }
// }


class Solution {
    public:
        int sumFourDivisors(vector<int>& v) {
            int TOTAL_SUM = 0;  
    
            for (int num : v) {  
                int cnt = 0, sum = 0;
    
                for (int j = 1; j * j <= num; ++j) {
                    if (num % j == 0) {
                        cnt++;
                        sum += j;  
                        
                        if (j != (num / j)) {
                            cnt++;  
                            sum += (num / j);
                        }
                    }
                    if (cnt > 4) break;  // More than 4 divisors → discard
                }
    
                if (cnt == 4) {  
                    TOTAL_SUM += sum;
                }
            }
    
            return TOTAL_SUM;
        }
    };
    