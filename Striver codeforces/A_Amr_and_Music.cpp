#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> instruments(n);

    // Reading input and storing both the days and original indices
    for (int i = 0; i < n; ++i) {
        int days;
        cin >> days;
        instruments[i] = {days, i + 1};
    }

    // Sorting instruments based on the number of days required (smallest to largest)
    sort(instruments.begin(), instruments.end());

    int totalDays = 0;
    vector<int> learnedInstruments;

    // Selecting instruments to learn
    for (int i = 0; i < n; ++i) {
        if (totalDays + instruments[i].first <= k) {
            totalDays += instruments[i].first;
            learnedInstruments.push_back(instruments[i].second);
        } else {
            break;
        }
    }

    // Output the number of instruments that can be learned
    cout << learnedInstruments.size() << endl;

    // Output the indices of the instruments
    for (int i = 0; i < learnedInstruments.size(); ++i) {
        cout << learnedInstruments[i] << " ";
    }
  

    return 0;
}
