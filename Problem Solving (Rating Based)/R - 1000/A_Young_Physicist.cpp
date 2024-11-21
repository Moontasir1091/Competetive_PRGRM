#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    int sum = 0, sum1 =0, sum2 = 0;

    for(int i=0;i<n;++i){
        for(int j=0;j<3;++j){
            cin >> arr[i][j];
        }
        sum = sum + arr[i][0];
        sum1 = sum1 + arr[i][1];
        sum2 = sum2 + arr[i][2];
    }

    if(sum==0 && sum1==0 && sum2==0){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
}