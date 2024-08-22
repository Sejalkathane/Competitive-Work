#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    // Step 1: Read input and compute floor and ceiling values
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        int floor_val = a[i] / 2;
        int ceil_val = (a[i] + 1) / 2;
        
        // Initialize b with floor values
        b[i] = floor_val;
    }

    // Step 2: Calculate the sum of floor values
    int sum_floor = 0;
    for (int i = 0; i < n; ++i) {
        sum_floor += b[i];
    }

    // Step 3: Calculate the difference needed to adjust the sum to zero
    int diff = -sum_floor;
    
    // Step 4: Adjust the result to balance the sum
    for (int i = 0; i < n && diff != 0; ++i) {
        int floor_val = a[i] / 2;
        int ceil_val = (a[i] + 1) / 2;

        if (b[i] == floor_val && ceil_val != floor_val) {
            int change = ceil_val - floor_val;
            if (diff >= change) {
                b[i] = ceil_val;
                diff -= change;
            }
        }
    }

    // Output the result
    for (int i = 0; i < n; ++i) {
        cout << b[i] << endl;
    }

    return 0;
}
