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

        vector<int> v(2 * n); // Resize the vector to hold 2n elements

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        // Calculate the minimum possible absolute difference
        int ans = v[n] - v[n - 1];

        cout << ans << endl;
    }

    return 0;
}
