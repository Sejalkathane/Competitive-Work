#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        // Check if we can find x and y such that l <= x < y <= r and l <= LCM(x, y) <= r
        if (2 * l <= r) {
            cout << l << " " << 2 * l << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
    
    return 0;
}
