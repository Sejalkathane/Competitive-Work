#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int maxi = 1;
    int curr = 1;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            curr++;
        } else {
            maxi = max(maxi, curr);
            curr = 1;
        }
    }
    maxi = max(maxi, curr);

    cout << maxi << endl;
    return 0;
}
