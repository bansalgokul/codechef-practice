#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " " << i - 1 << " ";
    }
    if (n % 2 == 1) {
        cout << n;
    }
    cout << endl;
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