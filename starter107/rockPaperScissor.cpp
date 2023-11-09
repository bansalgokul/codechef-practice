#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int scorea = 0, scoreb = 0;
    for (int i = 0; i < n; i++) {
        char x = a[i], y = b[i];
        if (x == 'R') {
            if (y == 'P') {
                scoreb++;
            } else if (y == 'S') {
                scorea++;
            }
        } else if (x == 'P') {
            if (y == 'R') {
                scorea++;
            } else if (y == 'S') {
                scoreb++;
            }
        } else {
            if (y == 'P') {
                scorea++;
            } else if (y == 'R') {
                scoreb++;
            }
        }
    }

    if (scorea > scoreb) {
        cout << 0 << endl;
    } else if (scorea == scoreb) {
        cout << 1 << endl;
    } else {
        int diff = scoreb - scorea;
        if (diff % 2 == 1) {
            cout << (diff + 1) / 2 << endl;
        } else {
            cout << diff / 2 + 1 << endl;
        }
    }
    return;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}