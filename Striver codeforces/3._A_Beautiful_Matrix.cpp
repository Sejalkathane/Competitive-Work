#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
        }
    }

    int a = 0;
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[i][j] == 1)
            {
                a = i;
                b = j;
                break;
            }
        }
    }

    int ans = 0;
    if (a > 2)
    {
        ans += a - 2;
        }
    else if (a < 2)
    {
        ans += 2 - a;
    }

    if (b > 2)
    {
        ans += b - 2;
    }
    else if (b < 2)
    {
        ans += 2 - b;
    }

    cout << ans;
}