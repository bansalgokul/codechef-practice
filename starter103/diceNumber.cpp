// https://www.codechef.com/problems/DICENUM
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve() {
    vector<int> a, b;
    int temp;
    for(int i = 0; i < 3; i++){
        cin >> temp;
        a.push_back(temp);
    }
    for(int i = 0; i < 3; i++){
        cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 2; i >=0 ; i--){
        if(a[i] > b[i]){
            cout << "Alice" << endl;
            return;
        }else if(a[i] < b[i]){
            cout << "Bob" << endl;
            return;
        }
    }
    cout << "Tie" << endl;
    return;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
	return 0;
}
