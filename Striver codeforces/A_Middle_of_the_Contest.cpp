#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char colon;

    // Reading input times
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    // Convert both times to minutes since midnight
    int time1 = h1 * 60 + m1;
    int time2 = h2 * 60 + m2;

    // Calculate the midpoint in minutes
    int midpoint = (time1 + time2) / 2;

    // Convert the midpoint back to hours and minutes
    int hr = midpoint / 60;
    int min = midpoint % 60;

    // Manual formatting for output
    if (hr < 10) {
        cout << "0" << hr;
    } else {
        cout << hr;
    }

    cout << ":";

    if (min < 10) {
        cout << "0" << min;
    } else {
        cout << min;
    }

    return 0;
}
