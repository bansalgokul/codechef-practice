#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, vector<int> wt, vector<int> val, int n) {
    int i;
    int w; // Create a 2D array of size 2 x (W + 1)
    vector<vector<int>> K(2);

    // Initialize the first row to 0
    for (w = 0; w <= W; w++) {
        K[0].push_back(0);
    }

    // Loop through the items
    for (i = 1; i <= n; i++) {
        // Use the alternate row to store the current values
        int curr = i % 2;
        // Use the previous row to get the previous values
        int prev = 1 - curr;

        // Loop through the weights
        for (w = 0; w <= W; w++) {
            // Copy the previous value if the item is too heavy
            if (wt[i - 1] > w) {
                K[curr][w] = K[prev][w];
            }
            // Otherwise, choose the maximum of including or excluding the item
            else {
                K[curr][w] = max(val[i - 1] + K[prev][w - wt[i - 1]],
                                 K[prev][w]);
            }
        }
    }
    // Return the final value
    return K[n % 2][W];
}

// Driver Code
void solve() {
    int n;
    int W;
    cin >> n >> W;
    vector<int> profit, weight;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        weight.push_back(a);
        profit.push_back(b);
    }

    cout << knapSack(W, weight, profit, n) << endl;

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