
// Collected


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int func(){
    long long n;
    cin>>n;
    long long totalSum=0;
    vector<long long> neg, pos;
    int zero=0;
    for(long long i=0;i<n;i++){
        long long temp;
        cin>>temp;
        if(temp<0){
            neg.push_back(-temp);
        }
        else if(temp==0){
            zero++;
        }
        else{
            pos.push_back(temp);
        }
    }

    sort(pos.begin(), pos.end(), greater<long long>());

    
    for (long long i = 0; i < pos.size(); i++)
    {
        totalSum += pos[i];
    }
    if (neg.size() & 1)
    {
        if(zero==0){
            sort(neg.begin(), neg.end(), greater<long long>());
            for (long long i = 0; i < neg.size(); i++)
            {
                totalSum += neg[i];
            }
            if (pos.size())
            {
                totalSum -= 2 * min(pos[pos.size() - 1], neg[neg.size() - 1]);
            }
            else{
                totalSum -= 2 * neg[neg.size() - 1];
            }
        }
        else{
            for (long long i = 0; i < neg.size(); i++)
            {
                totalSum += neg[i];
            }
        }
    }
    else{
        for (long long i = 0; i < neg.size(); i++)
        {
            totalSum += neg[i];
        }
    }
    cout << totalSum << endl;
    return 0;
}


int main()
{
    int tt=1;
    cin>>tt;
    while(tt--){
        func();
    }
    return 0;
}