#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    int money25 = 0;  
    int money50 = 0;  
    int flag = 1;     
    
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 25)
        {
            money25++;  
        }
        else if (v[i] == 50)
        {
            if (money25 > 0)  
            {
                money25--;
                money50++;  
            }
            else
            {
                flag = 0;  
                break;
            }
        }
        else if (v[i] == 100)
        {
           
            if (money50 > 0 && money25 > 0)
            {
                money50--;
                money25--;
            }
            else if (money25 >= 3)  {
                money25 -= 3;
            }
            else
            {
                flag = 0;  
                break;
            }
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
