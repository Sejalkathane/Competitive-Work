#include <iostream>
using namespace std;

long long find_number(int y, int x) {
    int k = max(y, x);
    long long start_num = (long long)(k - 1) * (k - 1) + 1;
    
    if (k % 2 == 0) {
        // Even layer: Numbers increase from bottom-left to top-right
        return start_num + (y - 1) + (k - x);
    } else {
        // Odd layer: Numbers increase from top-right to bottom-left
        return start_num + (k - y) + (x - 1);
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int y, x;
        cin >> y >> x;
        cout << find_number(y, x) << '\n';
    }

    return 0;
}
