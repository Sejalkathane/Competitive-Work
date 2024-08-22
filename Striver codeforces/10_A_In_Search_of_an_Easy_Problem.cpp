#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int e=0, h=0;

    for (auto a : v)
    {
        if (a == 0)
        {
            e++;
        }
        else if (a == 1)
        {
            h++;
        }
    }

    if (h >= 1)
        cout << "HARD";
    else
        cout << "EASY";
}