#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    int curr = 0;
    while (n > 0)
    {
        n -= v[curr];

        if (n <= 0)
        {
            cout << curr + 1 << endl;
            break;
        }

        curr = (curr + 1) % 7;
    }
}