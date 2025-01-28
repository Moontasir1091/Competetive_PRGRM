#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of operations

    queue<int> q;
    
    while(n--) {
        string command;
        cin >> command;  // Read command
        
        if (command == "Enqueue") {
            int x;
            cin >> x;  // Read value to push
            q.push(x);
        } else if (command == "Dequeue") {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
