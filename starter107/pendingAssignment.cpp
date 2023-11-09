#include <iostream>
using namespace std;

void solve() {
    int noOfAssignments, timeToComplete, totalDays;
    cin >> noOfAssignments >> timeToComplete >> totalDays;

    if ((noOfAssignments * timeToComplete) <= totalDays * 24 * 60) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}