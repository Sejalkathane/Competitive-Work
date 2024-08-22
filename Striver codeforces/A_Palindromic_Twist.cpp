#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int i = 0, j = n - 1;

        bool t = true;
        while (i < j)
        {
            if ((s[i] - 1 == s[j] - 1) || (s[i] + 1 == s[j] + 1) || (s[i] - 1 == s[j] + 1) || (s[i] + 1 == s[j] - 1))
            {
                i++;
                j--;
            }
            else
            {
                t = false;
                break;
            }
        }
        if (t == false)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
}