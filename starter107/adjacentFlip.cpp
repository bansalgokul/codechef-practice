#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    int onePair = 0, zeroPair = 0;
    s[0] == 1 ? one++ : zero++;
    for (int i = 1; i < n; i++) {
        s[i] == 1 ? one++ : zero++;
        if (s[i] == s[i - 1]) {
            s[i] == 1 ? onePair++ : zeroPair++;
            i++;
        }
    }

    if ((onePair)*2 == one || zeroPair * 2 == zero) {
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