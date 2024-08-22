#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int n;
    cin >> n;

    int sum = 0;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n ==1)
    {
        cout << 1;
        return 0;
    }

    sum = n - 1;

    for (int i = 2; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}