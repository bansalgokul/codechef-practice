// https://www.codechef.com/problems/ALTTAB

#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    unordered_set<string> windows;
    vector<string> arr;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        arr.push_back(s);
        windows.insert(s);
    }

    string output = "";
    for (int i = n - 1; i >= 0; i--) {
        if (windows.find(arr[i]) != windows.end()) {
            output += arr[i].substr(arr[i].length() - 2, 2);
            windows.erase(arr[i]);
        }
    }
    cout << output << endl;
}

int main() {

    solve();

    return 0;
}