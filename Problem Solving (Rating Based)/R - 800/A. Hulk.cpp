#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s1 = "I hate it";
    string s2 = "I love it";
    
     string st1 = "I hate that";
    string st2 = "I love that";
    if(n==1){
        cout << s1 << endl;
        return 0;
    }
    else{
        if(n%2!=0){
            for(int i=1;i<=n;++i){
                if(i==n){
                    cout << s1;
                    return 0;
                }
                if(i%2 != 0){
                    cout << st1 << " ";
                    
                }
                else{
                    cout << st2 << " ";
                }
            }
    }
    
    else{
        for(int i=1;i<=n;++i){
                if(i==n){
                    cout << s2;
                    return 0;
                }
                if(i%2 != 0){
                    cout << st1 << " ";
                }
                else{
                    cout << st2 << " ";
                }
            }
        
    }
    
}
}
