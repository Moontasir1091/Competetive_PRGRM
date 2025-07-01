#include<bits/stdc++.h>
using namespace std;

//double eps = 1e-9;
bool fun(double x, double c) {
    return (x * x + sqrt(x)) <= c;
}



int main(){
    double c; cin >> c;
    double eps = 1e-7;

    double l = 0, r = max(1.0,c);
    while(r - l > eps){
        double mid = (l+r)/2.0;
        if(fun(mid, c)){
            l = mid;
        } else {
            r = mid;
        }
    }
     cout << fixed << setprecision(9) << l << endl;
}