#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (auto a : s)
    {
        mp[a]++;
    }
    bool t = true;
    for (auto a : mp)
    {
        if (t == true && a.second % 2 == 1)
        {
            t = false;
        }
        else if (t == false && a.second % 2 == 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }

    string mid, first_str, last_str;

    for (auto a : mp)
    {  
        if (a.second % 2 == 1)
        {
            string temp(a.second,a.first);
            mid=temp;
        }else{
            
            first_str+=string(a.second/2 ,a.first);
            last_str+=string(a.second/2 ,a.first);
        }
    }
   reverse(first_str.begin(),first_str.end());
    cout<<first_str+mid+last_str;
}