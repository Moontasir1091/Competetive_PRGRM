#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

int p[N]; 
int a[N]; 
int b[N];

int main()
{

    int n;   cin>>n; 

    for(int i=1; i<=n; i++){ cin>>p[i];}

    for(int i=1; i<=n; i++) {cin>>a[i];}

    for(int i=1; i<=n; i++) {cin>>b[i];}

    priority_queue<int, vector<int>, greater<int>> pq[5][5];

    for(int i=1; i<=n; i++)
    {
        pq[a[i]][b[i]].push(p[i]);  
    }

    int m; 
    cin>>m; 

    while(m--)
    {
        int c; 
        cin>>c; 
        
        int ans = INT_MAX;

        int f, b; 

        for(int i=1; i<=3; i++)
        {
            if(!pq[c][i].empty() and pq[c][i].top() < ans)
            {
                ans = pq[c][i].top(); 
                f = c; b =i;  
            }
        } 

        for(int i=1; i<=3; i++)
        {
            if(!pq[i][c].empty() and pq[i][c].top() < ans)
            {
                ans = pq[i][c].top(); 
                f = i; b =c;  
            }
        } 

        if(ans == INT_MAX) ans = -1; 
        else pq[f][b].pop();

        cout<<ans<<" "; 

    }


    
}


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 2e5+5;

// int p[N]; 
// int a[N]; 
// int b[N];

// int main()
// {

//     int n; 
//     cin>>n; 

//     for(int i=1; i<=n; i++) cin>>p[i];
//     for(int i=1; i<=n; i++) cin>>a[i];
//     for(int i=1; i<=n; i++) cin>>b[i];

//     priority_queue<int, vector<int>, greater<int>> pq[5][5];

//     for(int i=1; i<=n; i++)
//     {
//         pq[a[i]][b[i]].push(p[i]);  
//     }

//     int m; 
//     cin>>m; 

//     while(m--)
//     {
//         int c; 
//         cin>>c; 
        
//         int ans = INT_MAX;

//         int f, b; 

//         for(int i=1; i<=3; i++)
//         {
//             if(!pq[c][i].empty() and pq[c][i].top() < ans)
//             {
//                 ans = pq[c][i].top(); 
//                 f = c; b =i;  
//             }
//         } 

//         for(int i=1; i<=3; i++)
//         {
//             if(!pq[i][c].empty() and pq[i][c].top() < ans)
//             {
//                 ans = pq[i][c].top(); 
//                 f = i; b =c;  
//             }
//         } 

//         if(ans == INT_MAX) ans = -1; 
//         else pq[f][b].pop();

//         cout<<ans<<" "; 

//     }


//     return 0; 
// }