#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int maxi = 0;
    int i = 1;
    while (maxi < n)
    {
        int num = (i * (i + 1)) / 2;

        maxi = maxi + num;
        if (maxi <= n)
        {
            count++;
        }
        i++;
    }
    cout<<count;
}