#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int zero_cnt = count(str.begin(), str.end(), '0');
    int one_cnt = count(str.begin(), str.end(), '1');

    cout << n - 2 * (min(zero_cnt, one_cnt)) << endl;
} 


/*
Why 2 * 
beacuse remove 2 character per deletion



*/
