// https://www.codechef.com/problems/DICEGAME2

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    vector<int> a(3), b(3);
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int scorea = a[1] + a[2];
    int scoreb = b[1] + b[2];

    if (scorea == scoreb) {
        cout << "TIE" << endl;
    } else if (scorea > scoreb) {
        cout << "ALICE" << endl;
    } else {
        cout << "BOB" << endl;
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
