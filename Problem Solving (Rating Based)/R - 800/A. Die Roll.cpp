#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0 ? a : gcd(b, a%b);
}





int main(){
    int y , w; cin >> y >> w;

    int max_roll = max(y , w);

    int numerator = 6 - max_roll + 1;
    int denominator = 6;

    int g = gcd(numerator, denominator);

    numerator = numerator/g;
    denominator = denominator/g;

    cout << numerator << "/" << denominator << endl;

}

// GCD ব্যবহার করে সরল ভগ্নাংশ বের করা
// gcd(numerator, denominator); দ্বারা ভগ্নাংশকে সরল করা হয়।