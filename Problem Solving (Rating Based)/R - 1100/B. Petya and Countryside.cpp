#include<bits/stdc++.h>
using namespace std;

int find_max_adjacent_count(const vector<int>& arr) {
    int n = arr.size();
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        if(i==0){
            for(int j= i+1; j<n;++j){
                if(arr[j] <= arr[j-1])
                count++;
                else
                break;
            }
            if(max_count < count+1){
                max_count = count + 1;
            }
        }
        else if(i==n-1){
            for(int j= i-1; j>=0;--j){
                if(arr[j] <= arr[j+1])
                count++;
                else
                break;
            }
            if(max_count < count+1){
                max_count = count + 1;
            }

        }
        else{
            for(int j= i+1; j<n;++j){
                if(arr[j] <= arr[j-1])
                count++;
                else
                break;
            }
            for(int j= i-1; j>=0;--j){
                if(arr[j] <= arr[j+1])
                count++;
                else
                break;
            }
            if(max_count < count+1){
                max_count = count + 1;
            }

        }

        
    }

    return max_count;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    int result = find_max_adjacent_count(arr);

    // Print the maximum count of adjacent elements
    cout << result << endl;

    return 0;
}
