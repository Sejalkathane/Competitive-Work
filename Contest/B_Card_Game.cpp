#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;

        // Check all 4 sequences
        // Sequence 1: (a1, b1) and (a2, b2)
        int suneetWins = 0, slavicWins = 0;
        if (a1 > b1) suneetWins++; else if (a1 < b1) slavicWins++;
        if (a2 > b2) suneetWins++; else if (a2 < b2) slavicWins++;
        if (suneetWins > slavicWins) ans++;

        // Sequence 2: (a1, b2) and (a2, b1)
        suneetWins = slavicWins = 0;
        if (a1 > b2) suneetWins++; else if (a1 < b2) slavicWins++;
        if (a2 > b1) suneetWins++; else if (a2 < b1) slavicWins++;
        if (suneetWins > slavicWins) ans++;

        // Sequence 3: (a2, b1) and (a1, b2)
        suneetWins = slavicWins = 0;
        if (a2 > b1) suneetWins++; else if (a2 < b1) slavicWins++;
        if (a1 > b2) suneetWins++; else if (a1 < b2) slavicWins++;
        if (suneetWins > slavicWins) ans++;

        // Sequence 4: (a2, b2) and (a1, b1)
        suneetWins = slavicWins = 0;
        if (a2 > b2) suneetWins++; else if (a2 < b2) slavicWins++;
        if (a1 > b1) suneetWins++; else if (a1 < b1) slavicWins++;
        if (suneetWins > slavicWins) ans++;

        cout << ans << endl;
    }

    return 0;
}
