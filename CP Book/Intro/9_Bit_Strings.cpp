#include <iostream>
using namespace std;

int main() {
    const int MOD = 1e9 + 7;
    int n;
    cin >> n;

    long long result = 1;
    long long base = 2;

    while (n > 0) {
        // If n is odd, multiply the current result by base
        if (n % 2 == 1) {
            result = (result * base) % MOD;
        }
        // Square the base and reduce n by half
        base = (base * base) % MOD;
        n /= 2;
    }

    cout << result << endl;
    return 0;
}
