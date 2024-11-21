#include<bits/stdc++.h>
using namespace std;
int main(){

string str; cin >> str;

if(str.size()==1){
    cout << 0 << endl;
    return 0;
}

int cnt = 0;

while(str.size()>1){
    int sum = 0;
    for(char digit : str){
        sum = sum + digit - '0';
    }
    str = to_string(sum);
    cnt++;
}
cout << cnt << endl;


}