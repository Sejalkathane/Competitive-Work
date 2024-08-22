#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    cin >> k;

    while (k)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n -= 1;
        }
        --k;
    }
    cout<< n;
}