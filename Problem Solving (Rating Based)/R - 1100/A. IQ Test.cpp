#include<bits/stdc++.h>
using namespace std;

const double EPSILON = 1e-9;  // Small tolerance for floating-point comparisons

bool isEqual(double x, double y) {
    return fabs(x - y) < EPSILON;  // Check if x and y are "close enough"
}

bool isInteger(double x) {
    return fabs(x - round(x)) < EPSILON;  // Check if x is an integer
}

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    // Checking if the sequence is an Arithmetic Progression (AP)
    double dif = a - b;
    if (isEqual(b - c, dif) && isEqual(c - d, dif)) {
        double nextTerm = d + dif;
        if (isInteger(nextTerm)) {
            cout << (int)nextTerm << endl;  // Print the next term if it's an integer
        } else {
            cout << 42 << endl;  // Print 42 if it's not an integer
        }
        return 0;
    }

    // Checking if the sequence is a Geometric Progression (GP)
    double ratio = b / a;  // Common ratio for GP
    if (isEqual(b / a, ratio) && isEqual(c / b, ratio) && isEqual(d / c, ratio)) {
        double nextTerm;
        if (a < b && b < c && c < d) {
            // If the sequence is increasing
            nextTerm = d * ratio;
        } else {
            // If the sequence is decreasing
            nextTerm = d / ratio;
        }

        // If the next term is an integer, print it. Otherwise, print 42.
        if (isInteger(nextTerm)) {
            cout << (int)nextTerm << endl;  // Print the next term if it's an integer
        } else {
            cout << 42 << endl;  // Print 42 if it's not an integer
        }
        return 0;
    }

    // If neither AP nor GP
    cout << 42 << endl;
    return 0;
}
