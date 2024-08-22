#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int drink = k * l;
    int lit = drink / nl;

    int lime = c * d;

    int sal = p / np;

    int ans = min(min(lit, lime), sal);

    int res = ans / n;
    cout << res;
}