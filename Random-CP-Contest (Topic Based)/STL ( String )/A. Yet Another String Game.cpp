#include <bits/stdc++.h>
using namespace std;

int main() {
    int nn;
    cin >> nn;
    
    while (nn--) {
        string game = "abcdefghijklmnopqrstuvwxyz";
        string str;
        cin >> str;
        
        
        string Ans = "";

        for (int i = 0; i < str.size(); ++i) {
            int l = 0;
        int r = 25;
            if (i % 2 == 0) {
                while (l <= r && game[l] == str[i]) {
                    l++;
                }
                if (l <= r) Ans += game[l];
            } 
            
            else {
                while (r >= l && game[r] == str[i]) {
                    r--;
                }
                if (r >= l) Ans += game[r];
            }
            
        }

        cout << Ans << "\n";
    }
}
