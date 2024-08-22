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
        string s1;
        string s2;

        cin >> s1;
        cin >> s2;

        int n = s1.size();
        int m = s2.size();

        bool valid = true;

        map<char, int> mp1, mp2;

        for (auto a : s1)
        {
            mp1[a]++;
        }

        if (m < n)
        {
            valid = false;
        }
        else if (m == n)
        {
            string a = s1;
            sort(a.begin(), a.end());
            string b = s2;
            sort(b.begin(), b.end());
            if (a != b)
            {
                valid = false;
            }
        }
        else
        {
            int i = 0, j = 0;

            while (j < m)
            {

                mp2[s2[j]]++;

                if (j - i + 1 == n)
                {
                    if (mp1 == mp2)
                    {

                        break;
                    }

                    if (mp2[s2[i]] > 0)
                    {
                        mp2[s2[i]]--;

                        if (mp2[s2[i]] == 0)
                        {
                            mp2.erase(s2[i]);
                        }
                    }
                    i++;
                }
                j++;
            }
            if (j == m && mp1 != mp2) { 
                valid = false;
            }
        }

        if (valid == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}