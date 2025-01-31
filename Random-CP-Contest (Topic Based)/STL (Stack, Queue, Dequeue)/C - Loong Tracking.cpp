#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;

    deque<pair<int, int>>dragon;

    for(int i= 1 ; i <= n; ++i){
        dragon.push_back({i,0});
    }


    for(int i=1; i<=q; ++i){
        int type; cin >> type;

        if(type == 2){
            int p; cin >> p;

            cout << dragon[p-1].first << " " << dragon[p-1].second << endl;
        }

        else if(type == 1){
            char direction; cin >> direction;
            
    pair<int, int> head = dragon.front();

    pair<int, int> new_head;

           if(direction == 'U')new_head = {head.first, head.second + 1};
            else if(direction == 'D')new_head = {head.first, head.second - 1};
            else if(direction == 'R')new_head = {head.first + 1, head.second};
            else if(direction == 'L')new_head = {head.first - 1, head.second};

            dragon.pop_back();
            dragon.push_front(new_head);
        }


    }

}