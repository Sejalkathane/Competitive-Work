#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end(), greater<int>());
        
        int mx = 0;
        int move_count = 0;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] >= mx) {
                mx = a[i];
                a[i] = 0;
                move_count++;
            }
        }
        
        if (move_count % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
