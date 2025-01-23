#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        int total_one = 0;
        for(int i=0;i<n;++i){
            if(str[i]=='1')total_one++;
        }
        int zeros = 0;
        for(int i=n-1;i>=(n-total_one);--i){
            if(str[i]=='0')zeros++;
        }
        if(zeros == 0){
            cout << 0 << endl;
            
            
        }

        else{
            cout<<"1\n";
            cout << (2*zeros) << " ";
            for(int i=0;i<n;++i){
                if(str[i]=='1' && i < n-total_one){
                    cout << (i+1) << " ";

                }
                else if(str[i]=='0' && i >= n-total_one){
                    cout << (i+1) << " ";

                }
            }
            cout << endl;

        }

    }
}