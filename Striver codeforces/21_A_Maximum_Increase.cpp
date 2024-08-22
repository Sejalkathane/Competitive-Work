#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

   
    int maxi = 0;
    int count = 0;
    int prev = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > prev)
        {
            count++;
            prev = v[i];
        }
        else
        {
            count = 1;
            prev = v[i];
        }
        maxi = max(maxi, count);
    }

    cout << maxi;
}