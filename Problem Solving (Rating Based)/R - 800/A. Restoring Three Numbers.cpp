#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    int mx_num = max(max(a, b), max(c, d)); // দুটি max() ফাংশন ব্যবহার করে
    if(mx_num==a)
    cout << mx_num - d << " " << mx_num - b << " " << mx_num - c << endl;
    else if(mx_num==b)
    cout << mx_num - d << " " << mx_num - a << " " << mx_num - c << endl;
    else if(mx_num==c)
    cout << mx_num - d << " " << mx_num - a << " " << mx_num - b << endl;
    else 
    cout << mx_num - c << " " << mx_num - a << " " << mx_num - b << endl;
}
