#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n <= 0) break; // Exit the loop if input is non-positive

        map<string, int> m;
        while (n--) {
            string s;
            cin >> s;
            m[s]++;
        }

        int maxFrequency = 0;
        vector<string> mostFrequentStrings;

        // Find the maximum frequency and corresponding strings
        for (const auto& entry : m) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                mostFrequentStrings = {entry.first}; // Reset the list
            } else if (entry.second == maxFrequency) {
                mostFrequentStrings.push_back(entry.first); // Add to the list
            }
        }

        // Print the result
       // cout << "Strings with the highest frequency (" << maxFrequency << "):" << endl;
        for (const string& str : mostFrequentStrings) {
            cout << str << endl;
        }
    }

    return 0;
}
