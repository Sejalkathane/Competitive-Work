#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string str;
    for (char am : s)
    {
        char lower_char = tolower(am);
        if (lower_char != 'a' && lower_char != 'e' && lower_char != 'i' && lower_char != 'o' && lower_char != 'u')
        {
            str += lower_char;
        }
    }

    string ans;
    for (char a : str)
    {
        ans += '.';
        ans += a;
    }

    cout << ans << endl;

    return 0;
}
