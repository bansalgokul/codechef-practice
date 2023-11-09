//  https://www.codechef.com/problems/CAESAR

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, t, u;
    cin >> s >> t >> u;

    int k = t[0] - s[0] >= 0 ? t[0] - s[0] : 26 + (t[0] - s[0]);

    for (int i = 0; i < n; i++) {
        u[i] = u[i] + k <= 'z' ? u[i] + k : 'a' - 1 + ((int(u[i]) + k) % int('z'));
    }

    cout << u << endl;
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