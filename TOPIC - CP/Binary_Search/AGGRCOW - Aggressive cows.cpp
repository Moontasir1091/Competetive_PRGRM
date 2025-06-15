#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;    
int n, cows;
vector<int>pos(N);


bool can_place_cows(int minimum_distance)
{
    int last_pos_of_cow = -1;
    int cows_cnt = cows;

    for(int i  = 0; i< n ; ++i){
        if(pos[i] - last_pos_of_cow >= minimum_distance || last_pos_of_cow == -1){ 
            cows_cnt--;
            last_pos_of_cow = pos[i];
        }
        if(cows_cnt == 0){
           break;
        }

    }
    return cows_cnt == 0;

    
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        //vector<int> pos(n);
        for(int i = 0; i < n; i++)
        {
            cin >> pos[i];
        }
        sort(pos.begin(), pos.begin() + n);


        int lo = 0, hi = 1e9;
        while (hi - lo > 1)
        {
            int mid = (hi + lo)/2;
            if(can_place_cows(mid)){
                lo = mid;
            }
            else{
                hi = mid - 1;
            }
        }
        if(can_place_cows(hi)){
            cout << hi << endl;
        }
        else{
            cout << lo << endl;
        }
        
    }
    
}