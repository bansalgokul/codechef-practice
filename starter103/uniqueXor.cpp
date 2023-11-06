// https://www.codechef.com/problems/UNIQUEK
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<vector<int>> arr(k, vector<int>(2, 0)); //[ no of zeroes, no of ones]

    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n; j += k)
        {
            if (s[j] == '1')
            {
                arr[i][1]++;
            }
            else
            {
                arr[i][0]++;
            }
        }
    }

    int stepsToZero = 0;
    int stepsToOne = 0;

    for (int i = 0; i < k; i++)
    {
        stepsToZero += (arr[i][1] / 2);
        if (arr[i][1] % 2 == 1)
        {
            stepsToZero += 2;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (arr[i][1] != 0)
        {
            stepsToOne += arr[i][0];
        }
        else
        {
            stepsToOne = INT_MAX;
            break;
        }
    }

    cout << min(stepsToOne, stepsToZero) << endl;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
