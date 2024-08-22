#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool t = false;
    for (int i = 0; i < 5; i++)
    {
        string str;
        cin >> str;

        if ((s[0] == str[0]) || s[1] == str[1])
        {
            t = true;
        }
    }

    if (t == true)
        cout << "YES";
    else
        cout << "NO";
}