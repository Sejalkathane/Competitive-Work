#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canShower(int n, int s, int m, vector<vector<int>>& tasks) {
    // Check if there is time before the first task
    if (tasks[0][0] >= s) {
        return true;
    }
    
    // Check between tasks
    for (int i = 1; i < n; ++i) {
        if (tasks[i][0] - tasks[i-1][1] >= s) {
            return true;
        }
    }
    
    // Check if there is time after the last task
    if (m - tasks[n-1][1] >= s) {
        return true;
    }
    
    return false;
}

int main() {

     ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<vector<int>> tasks(n, vector<int>(2));
        for (int i = 0; i < n; ++i) {
            cin >> tasks[i][0] >> tasks[i][1];
        }

        // Sort tasks to ensure they are in order (if needed)
        sort(tasks.begin(), tasks.end());

        if (canShower(n, s, m, tasks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
