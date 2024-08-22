#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}


//my approch tle for test case 2
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     long long int t;
//     cin >> t;

//     while (t--)
//     {
//         long long int a, b;
//         cin >> a >> b;

//         while (a > 1 || b > 1)
//         {
//             if (a == b)
//             {
//                 a -= 2;
//                 b -= 1;
//             }
//             else if (a > b)
//             {
//                 a -= 2;
//                 b -= 1;
//             }
//             else if (a < b)
//             {
//                 a -= 1;
//                 b -= 2;
//             }
//         }

//         if (a == 0 && b == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }