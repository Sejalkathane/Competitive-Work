#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // Find the first and last occurrence of '1'
        int firstOne = s.find('1');
        int lastOne = s.rfind('1');

        // If there are no '1's in the string, no '0's need to be erased
        if (firstOne == string::npos)
        {
            cout << 0 << endl;
            continue;
        }

        int zeroCount = 0;

        // Count the number of '0's between the first and last '1'
        for (int i = firstOne; i <= lastOne; ++i)
        {
            if (s[i] == '0')
            {
                zeroCount++;
            }
        }

        cout << zeroCount << endl;
    }

    return 0;
}
