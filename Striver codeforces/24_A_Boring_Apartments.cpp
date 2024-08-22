#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int num = n % 10;
        int count = 0;

        while (n)
        {
            count++;
            n = n / 10;
        }

        int res = (num - 1) * 10;
        if (count == 1)
            res += 1;
        else if (count == 2)
            res += 3;
        else if (count == 3)
            res += 6;
        else if (count == 4)
            res += 10;
       
       cout<<res<<endl;
    }
}