//  https://www.codechef.com/problems/TRANCHAIN

#include <algorithm>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[4] = {0, 0, 0, 0}; // O, AB, A, B
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "O") {
            a[0]++;
        } else if (s == "AB") {
            a[1]++;
        } else if (s == "A") {
            a[2]++;
        } else {
            a[3]++;
        }
    }

    cout << a[0] + a[1] + max(a[2], a[3]) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}