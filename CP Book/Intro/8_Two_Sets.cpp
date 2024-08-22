#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<int> set1, set2;
        long long target = sum / 2;

        for (int i = n; i > 0; i--) {
            if (target >= i) {
                set1.push_back(i);
                target -= i;
            } else {
                set2.push_back(i);
            }
        }

        // Output the first set
        cout << set1.size() << endl;
        for (int x : set1) {
            cout << x << " ";
        }
        cout << endl;

        // Output the second set
        cout << set2.size() << endl;
        for (int x : set2) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
