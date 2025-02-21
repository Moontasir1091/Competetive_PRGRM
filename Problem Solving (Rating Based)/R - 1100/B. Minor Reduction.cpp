#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        int n = str.size();
        int ind = -1; int sum = 0;

        for(int i=n-1; i>0; --i) {  // Loop condition fixed
            sum = (str[i] - '0') + (str[i-1] - '0');  // Proper summation
            if(sum > 9) {
                ind = i;
                break;
            }
        }



        if(ind != -1) {
            for(int i=0; i<ind-1; ++i) {
                cout << str[i];
            }
            cout << sum;  // Print the sum
            for(int i=ind+1; i<n; ++i) {
                cout << str[i];
            }
            cout << endl;
            continue;
        }



        // If no sum > 9 found, merge first two digits
        cout << (str[0] - '0') + (str[1] - '0');
        for(int i=2; i<n; ++i) {
            cout << str[i];
        }
        cout << endl;
    }
 
}
