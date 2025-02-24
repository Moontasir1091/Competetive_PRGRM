// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n; 

// //     cin >> n; 
// //     vector<int> v(n);
    
// //     for (int i = 0; i < n; ++i) {
// //         cin >> v[i];
// //     }


    
// //     sort(v.begin(), v.end());

// //     int cnt = 0, sum = 0;
    
// //     for (int i = 0; i < n; ++i) {
// //         if (sum + v[i] > 4) { // যখনই ৪ ছাড়িয়ে যাবে, নতুন গ্রুপ গঠন করবো
// //             cnt++;
// //             sum = sum - 4; // নতুন গ্রুপ শুরু
// //         } else {
// //             sum += v[i];
// //         }
// //     }
    
// //     if (sum > 0) cnt++; // বাকি কোনো অবশিষ্ট গ্রুপ থাকলে সেটাও গণনা হবে।

// //     cout << cnt << endl;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin >> n;
//     int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, cnt_4 = 0;
//     vector<int>v(n);
//     int sum = 0;
//     for(int i=0;i<n;++i){
//         cin >> v[i]; 
//         if(v[i] == 1)cnt_1++;
//         if(v[i] == 2)cnt_2++;
//         if(v[i] == 3)cnt_3++;
//         if(v[i] == 4)cnt_4++;
//     }
//     int texi = 0;

//     // for Group of 4 people:-
//     texi += cnt_4;

//      // for Group of 3 people:-

//      texi = texi + cnt_3;
//      cnt_1 = cnt_1 - cnt_3;
//      if(cnt_1 < 0) cnt_1 = 0;

//       // for Group of 2 people:-

//       if(cnt_2 % 2 == 0){
//         cnt_2 = cnt_2/2;
//         texi = texi + cnt_2;

//       }
//       else{
//         cnt_2 = cnt_2/2 + 1;
//         texi = texi + cnt_2;
//         cnt_1 = cnt_1 - 2;

//         if(cnt_1 < 0) cnt_1 = 0;

//       }




//        // Group of one
//        cnt_1 = ceil(cnt_1/4.0);
//         texi += cnt_1;


//         cout << texi << endl;



    
// }



#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> heights(n);
    
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Finding the index of the tallest soldier (leftmost occurrence)

    
    int max_height = *max_element(heights.begin(), heights.end());
    int max_index = find(heights.begin(), heights.end(), max_height) - heights.begin();

    // Finding the index of the shortest soldier (rightmost occurrence)
    int min_height = *min_element(heights.begin(), heights.end());
    int min_index = find(heights.rbegin(), heights.rend(), min_height) - heights.rbegin();
    min_index = n - 1 - min_index; // Convert reverse iterator index to normal index

    // Calculate the total moves
    int moves = max_index + (n - 1 - min_index);
    if (max_index > min_index) moves--; // Adjust if max_index shifts min_index

    cout << moves << endl;

    return 0;
}
