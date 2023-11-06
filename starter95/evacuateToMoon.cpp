//  https://www.codechef.com/problems/MOONSOON

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve() {
    int n, m, h;
    cin >> n >> m >> h;

    priority_queue<long long> cars;
    priority_queue<long long> outlets;
    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cars.push(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        outlets.push(x);
    }

    long long output = 0;
    while (!cars.empty() && !outlets.empty()) {
        long long car = cars.top();
        long long outlet = outlets.top();
        cars.pop();
        outlets.pop();

        output += min(car, outlet * h);
    }
    cout << output << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}