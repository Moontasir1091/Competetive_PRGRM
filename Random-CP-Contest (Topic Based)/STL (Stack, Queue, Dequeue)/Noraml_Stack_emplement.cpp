#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of operations

    stack<int> s;
    
    while(n--) {
        string command;
        cin >> command;  // Read command
        
        if (command == "push") {
            int x;
            cin >> x;  // Read value to push
            s.push(x);
        } else if (command == "pop") {
            if (!s.empty()) {
                cout << s.top() << endl;
                s.pop();
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
