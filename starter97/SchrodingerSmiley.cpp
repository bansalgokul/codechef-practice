// https://www.codechef.com/problems/SMILEY

#include <iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int output = 0;
    string currString = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == ':') {
            if (currString.length() > 1) {
                output++;
            }
            currString = ":";
        } else if (s[i] == ')') {
            if (currString[0] == ':') {
                currString += ")";
            }
        } else {
            currString = "";
        }
    }

    cout << output << endl;
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
