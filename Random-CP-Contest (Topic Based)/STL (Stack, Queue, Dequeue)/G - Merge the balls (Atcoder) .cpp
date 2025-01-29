#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of balls
    vector<int> balls(n);

    // Step 1: Read the sizes of the balls
    for (int i = 0; i < n; ++i) {
        cin >> balls[i];
    }

    vector<int> stack;  // This will act as our stack to hold merged balls

    // Step 2: Process the balls
    for (int i = 0; i < n; ++i) {
        int current_ball = balls[i];  // Current ball we're processing
        
        // If the stack is not empty and the last ball in stack is the same as current one
        while (!stack.empty() && stack.back() == current_ball) {
            stack.back() += current_ball;  // Merge the balls by adding their size
            break;  // After merging, we do not continue with this ball
        }

        // If no merge happens, add the current ball to the stack
        if (stack.empty() || stack.back() != current_ball) {
            stack.push_back(current_ball);
        }
    }

    // Step 3: Output the number of balls remaining after all merges
    cout << stack.size() << endl;

    return 0;
}
