#include <iostream>
using namespace std;

int main() {


    string str;
    cin >> str;

    for (char c : str) {
        if ( c == 'Q' || c == 'H' || c == '9') {
            cout << "YES" << endl;
            return 0;  
        }
    }

    cout << "NO" << endl;
    return 0;
}
