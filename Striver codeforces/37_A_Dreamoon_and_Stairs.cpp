#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n, m;
    std::cin >> n >> m;

   
    int min_moves = (n + 1) / 2;

   
    for (int moves = min_moves; moves <= n; ++moves) {
        if (moves % m == 0) {
            cout << moves ;
            return 0;
        }
    }

    // If no valid move count found
    cout << -1 << endl;
    return 0;
}
