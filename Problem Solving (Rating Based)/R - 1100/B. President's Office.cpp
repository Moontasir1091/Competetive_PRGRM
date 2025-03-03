#include <bits/stdc++.h>
using namespace std;

int n, m;
char president;
char arr[102][102];

int direc_x[] = {-1, 1, 0, 0};
int direc_y[] = {0, 0, -1, 1};

bool is_valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main()
{

    cin >> n >> m >> president;

    set<char> result;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] == president)
            {
                for (int k = 0; k < 4; ++k)
                {
                    int to_x = i + direc_x[k];
                    int to_y = j + direc_y[k];

                    if (is_valid(to_x, to_y) && arr[to_x][to_y] != president && arr[to_x][to_y] != '.')
                    {
                        result.insert(arr[to_x][to_y]); // সেটে সংযুক্ত ডেস্ক সংরক্ষণ
                    }
                }
            }
        }
    }

    cout << result.size() << endl;
}