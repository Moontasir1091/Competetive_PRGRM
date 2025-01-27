/// STACK diye korle TLE ashe..
// Using secondary string:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str;
//     cin >> str;

//     string Ans = "";

//     for (char c : str) {
//         if (!Ans.empty() && Ans.back() == c) {
//             Ans.pop_back();
//         } else {
//             Ans.push_back(c);
//         }
//     }

//     cout << Ans << endl;
  
// }
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str; cin >> str;  stack<char> st;

    // Process the string with the stack
    for (long long i = 0; i < str.size(); ++i) {
        if (!st.empty() && st.top() == str[i]) {
            st.pop();  // Remove consecutive duplicate
        } else
         {
            st.push(str[i]);  // Push the current character
        }
    }

    // Reconstruct the result efficiently
    string result = "";
    result.reserve(str.size());  // Reserve space to avoid reallocations

    // Build the result string from the stack
    while (!st.empty()) {
        result = st.top() + result;  // Efficiently build the result
        st.pop();
    }

    // Output the result
    cout << result << endl;
    return 0;
}



// Explanation:
Input: "reallazy"
Initialize the Stack: We start with an empty stack, and we go through each character of the string one by one.

Iterate over each character:

The first character is 'r'. The stack is empty, so we push 'r' onto the stack.

Stack: ['r']
The next character is 'e'. The top of the stack is 'r', which is not equal to 'e', so we push 'e' onto the stack.

Stack: ['r', 'e']
The next character is 'a'. The top of the stack is 'e', which is not equal to 'a', so we push 'a' onto the stack.

Stack: ['r', 'e', 'a']
The next character is 'l'. The top of the stack is 'a', which is not equal to 'l', so we push 'l' onto the stack.

Stack: ['r', 'e', 'a', 'l']
The next character is 'l'. The top of the stack is 'l', which is equal to 'l'. This means we have found a consecutive duplicate. So, we pop the top of the stack.

Stack after popping: ['r', 'e', 'a']
The next character is 'a'. The top of the stack is 'a', which is equal to 'a'. This means we have another consecutive duplicate. So, we pop the top of the stack.

Stack after popping: ['r', 'e']
The next character is 'z'. The top of the stack is 'e', which is not equal to 'z', so we push 'z' onto the stack.

Stack: ['r', 'e', 'z']
The next character is 'y'. The top of the stack is 'z', which is not equal to 'y', so we push 'y' onto the stack.

Stack: ['r', 'e', 'z', 'y']
Rebuild the string: Now that we've processed all characters, the stack contains the string in reverse order:

Stack: ['r', 'e', 'z', 'y']
To rebuild the string, we pop from the stack and construct the final result:

Pop 'y': Result = "y"
Pop 'z': Result = "zy"
Pop 'e': Result = "ezy"
Pop 'r': Result = "rezy"
Final Result: The string after removing consecutive duplicates is "rezy".




/// STRING RESERVE
স্ট্রিং কনক্যাটেনেশন: বড় স্ট্রিংয়ে স্ট্রিং কনক্যাটেনেশন একটি বড় সমস্যা হতে পারে। C++ এ, স্ট্রিংগুলি অপরিবর্তনীয় (immutable), অর্থাৎ প্রতিবার কনক্যাটেনেট করার সময় নতুন মেমরি এলোকেট হয় এবং পুরানো স্ট্রিংটি কপি করতে হয়।

আপনার কোডে:
result = st.top() + result;
এখানে, প্রতিবার নতুন স্ট্রিং তৈরি হচ্ছে, যেখানে স্ট্যাকের ক্যারেক্টারটি পুরনো result স্ট্রিংয়ের সামনে যোগ করা হচ্ছে। এটি O(n^2) টাইম কমপ্লেক্সিটি তৈরি করতে পারে, কারণ প্রতিবার স্ট্রিং কপি করতে হবে।

অকার্যকর স্ট্রিং কনক্যাটেনেশন এড়ানোর সমাধান:
এটি এড়াতে, আপনি স্ট্রিংয়ের জন্য জায়গা রিজার্ভ করতে পারেন এবং আরও কার্যকরী পদ্ধতি ব্যবহার করতে পারেন।


/// Solution
result.reserve(str.size()): এই লাইনটি স্ট্রিংয়ের জন্য আগে থেকেই যথেষ্ট জায়গা রিজার্ভ করে দেয়, যাতে পরবর্তী সময়ে স্ট্রিং কপি না করতে হয় এবং মেমরি পুনরায় এলোকেট করতে না হয়।

কার্যকরী স্ট্রিং কনস্ট্রাকশন: এবার স্ট্যাক থেকে প্রতিটি ক্যারেক্টার result এর সামনে যুক্ত হচ্ছে, তবে এখানে রিজার্ভেশন থাকায় স্ট্রিং কনক্যাটেনেশন আরও কার্যকরীভাবে হচ্ছে।
*/

      
   
