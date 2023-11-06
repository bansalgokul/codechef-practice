//  https://www.codechef.com/problems/BOX95

#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> arr;
    long long maxNum = 0;
    long long x;
    for (long long i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
        maxNum = max(maxNum, x);
    }
    long long c1 = 0, c2; // c1 -> no of binary digits in max number, c2 -> no of element with c1 binary digits;
    while (maxNum > 0) {
        maxNum = maxNum >> 2;
        c1++;
    }
    long long check = pow(2, c1 - 1);

    for (long long i = 0; i < n; i++) {
        if (arr[i] >= check) {
            c2++;
        }
    }

    cout << 1 + (c2 / 2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}