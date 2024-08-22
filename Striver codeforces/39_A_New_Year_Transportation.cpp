#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> dum(n);
    for (int i = 1; i <= n; i++)
    {
        dum.push_back(i);
    }

    int count = 1;
    while (count <= m)
    {
        if (count == m)
        {
            cout << "YES"<<endl;
            return 0;
        }
        count += v[count-1] + dum[count-1];
    }

    cout << "NO" <<endl;

}