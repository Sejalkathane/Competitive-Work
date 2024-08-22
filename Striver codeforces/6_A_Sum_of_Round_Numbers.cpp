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

        vector<int> v;
        int mul = 1;
        int ans = 0;
        while (n)
        {
            int res = n % 10;
            if (res != 0)
            {
                v.push_back(res *mul);
                ans++;
            }
            mul = mul * 10;
            n = n / 10;    
        }


        reverse(v.begin(),v.end());

        cout << ans << endl;
        for (auto a : v)
        {
            cout << a << " ";
        }
        cout << endl;
    }
}