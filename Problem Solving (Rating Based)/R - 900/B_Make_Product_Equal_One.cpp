#include<bits/stdc++.h>
using namespace std;
int main(){
long long n; cin >> n;
long long arr[n];
int neg_value = 0;
int zero = 0;
for(int i = 0;i<n;++i){
    cin >> arr[i];
    if(arr[i]<0)neg_value++;

    else if(arr[i]==0)zero++;
}
//cout << zero;

long long cnt = 0;
sort(arr,arr+n);

if(neg_value%2==0){

for(long long i =0;i<n;++i){
    
        if(arr[i]<0){
            cnt = cnt + abs(arr[i]+1);
        }
        else{
            cnt = cnt + abs(arr[i]-1);
        }
}

cout << cnt << endl;
}
else{
    cnt = cnt + abs(arr[0]-1);
    for(long long i =1;i<n;++i){
    
        if(arr[i]<0){
            cnt = cnt + abs(arr[i]+1);
        }
        else{
            cnt = cnt + abs(arr[i]-1);
        }
}

if(zero > 0){
    cout << cnt-2 << endl;
}
else
cout << cnt << endl;
}

    




}
// if(zero > 0){
//     cout << cnt -2 << endl;
// }
// else