#include <iostream>
using namespace std;

void Func(int n) {
    for (int a = 1; a <= 26; a++) {
        for (int b = a; b <= 26; b++) {
            int c = n - (a + b);
            if (c >= b && c <= 26) {
                cout << char('a' + a - 1) << char('a' + b - 1) << char('a' + c - 1) << endl;
                return;
            }
        }
    }
}

int main() {
    int test, n;
    cin >> test;
    while (test--) {
        cin >> n;
        Func(n);
    }
    return 0;
}
