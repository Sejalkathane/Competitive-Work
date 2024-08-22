#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Total lines = 2 * n + 1
    int num = 2 * n + 1;

    for (int i = 0; i < num; ++i) {
        int curr = (i <= n) ? i : num - i - 1;

        // Print leading spaces
        for (int j = 0; j < n - curr; ++j) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= curr; ++j) {
            if (j > 0) cout << " "; // Add space between numbers
            cout << j;
        }

        // Print decreasing numbers
        for (int j = curr - 1; j >= 0; --j) {
            cout << " " << j;
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
