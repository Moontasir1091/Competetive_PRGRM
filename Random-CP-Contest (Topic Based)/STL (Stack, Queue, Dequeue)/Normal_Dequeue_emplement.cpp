#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of operations
    deque<int> dq;

    for (int i = 0; i < T; i++) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (command == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (command == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else {
                cout << "Empty" << endl;
            }
        } else if (command == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
