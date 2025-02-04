#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin , str);

    unordered_set<char>letter;
    for(int i=0;i<str.size();++i){
        if(isalpha(str[i]))
        letter.insert(tolower(str[i]));
    }
    if(letter.size() == 26){
        cout << "pangram" << endl;
    }
    else{
        cout << "not pangram" << endl;
    }
}

/*
isalpha() - wether a string character or not
tolower = tranform a character into lower case letter.
// Uppercase এ রূপান্তর
    string upper_text = text;
    transform(upper_text.begin(), upper_text.end(), upper_text.begin(), ::toupper);
    
    // Lowercase এ রূপান্তর
    string lower_text = text;
    transform(lower_text.begin(), lower_text.end(), lower_text.begin(), ::tolower);

*/







// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);  // পুরো বাক্য ইনপুট নেওয়া

//     unordered_set<char> letter;
//     for (char ch : str) {
//         if (isalpha(ch)) {  // শুধুমাত্র a-z বা A-Z নিবে
//             letter.insert(tolower(ch));
//         }
//     }

//     if (letter.size() == 26) {
//         cout << "pangram" << endl;
//     } else {
//         cout << "not pangram" << endl;
//     }

//     return 0;
// }
