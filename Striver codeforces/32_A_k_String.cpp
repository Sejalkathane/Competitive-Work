#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    vector<int> v(26, 0);  // Frequency vector for 26 letters

    // Count frequency of each character
    for (auto &c : s) {
        v[c - 'a']++;
    }

    // Construct base string
    string res = "";
    for (int i = 0; i < 26; i++) {
        if (v[i] % k != 0) {  // Check divisibility condition
            cout << "-1" << endl;
            return 0;
        } else {
            int times = v[i] / k;
            while (times--) {
                res.push_back('a' + i);  // Append the character to the base string
            }
        }
    }

    // Repeat the base string k times
    string old = res;
    while (--k) {
        res += old;
    }

    cout << res << endl;
    return 0;
}
