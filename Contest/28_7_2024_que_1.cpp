#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; // length of the array
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // To maximize the last remaining element, consider the maximum element in the array
        int max_value = *max_element(a.begin(), a.end());

        cout << max_value << endl;
    }

    return 0;
}
