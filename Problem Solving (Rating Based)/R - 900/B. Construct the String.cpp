#include <bits/stdc++.h>

using namespace std;

int main() {

	
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		
        for(int p = 0; p < n ; ++p){
            cout << char('a' + p % b);
        }
		cout << endl;
	}
	
	return 0;
}

