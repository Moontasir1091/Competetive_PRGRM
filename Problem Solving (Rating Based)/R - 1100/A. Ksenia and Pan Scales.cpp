#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, s;
    cin >> str >> s;

    int Sc = str.find('|');  

 

    string left = str.substr(0, Sc);  
    string right = str.substr(Sc + 1); 

    int diff = abs((int)left.size() - (int)right.size()); 

    // অসম্ভব কেস চেক করা
    if (s.size() < diff || (s.size() - diff) % 2 != 0) {
        cout << "Impossible" << endl;
        return 0;
    }

    // ভারসাম্য আনতে বাম বা ডান দিকে প্রয়োজনীয় অক্ষর যোগ করা
    if (left.size() < right.size()) {
        left += s.substr(0, diff);
    } else {
        right += s.substr(0, diff);
    }

    // বাকি অক্ষর দুই পাশে সমানভাবে ভাগ করা
    int remaining = s.size() - diff;
    left += s.substr(diff, remaining / 2);
    right += s.substr(diff + remaining / 2);

    cout << left << "|" << right << endl; 
    return 0;
}
