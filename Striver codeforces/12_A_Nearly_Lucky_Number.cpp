#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int ans = 0;

    while (n)
    {
        int res = n % 10;
        if (res == 4 || res == 7)
        {
            ans++;
        }
        n = n / 10;
    }
    if (ans == 4 || ans == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
