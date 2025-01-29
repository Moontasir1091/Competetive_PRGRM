#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int>symbol = {{'[',-1}, {'{',-2}, {'(', -3}, {']',1},{'}',2},{')',3}};

string isBalanced(string s){
    stack<char> st;

    for(char brackets: s){
        if(symbol[brackets] < 0){  // that means it is a opening Brackets

            st.push(brackets);

        }

        else{
            if(st.empty()) return "NO";

            char top = st.top();
            st.pop();
            if(symbol[top] + symbol[brackets] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
}












int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        cout << isBalanced(str) << endl;

    }
}