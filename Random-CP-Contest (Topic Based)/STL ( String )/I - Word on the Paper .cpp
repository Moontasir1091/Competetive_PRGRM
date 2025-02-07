#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int t = 8;
        while(t--){
            string str; cin >> str;
            for(int i = 0 ;i < str.size();++i){
                if(str[i] != '.'){
                    cout << str[i];
                }
            }
            
        }
        cout << endl;
    }
}