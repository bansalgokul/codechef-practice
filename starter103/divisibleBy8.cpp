// https://www.codechef.com/problems/DIVISIBLEBY8
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

unordered_set<int> div8;

void solve()
{
    int len;
    string num;
    cin >> len >> num;

    int number = 0;

    if (len < 4)
    {
        number = stoi(num);
        if (div8.find(number) != div8.end())
        {
            cout << number << endl;
            return;
        }
        else
        {
            int newNum = number - (number % 10);
            for (int i = newNum; i < newNum + 10; i++)
            {
                if (div8.find(i) != div8.end())
                {
                    cout << i << endl;
                    return;
                }
            }
        }
        return;
    }

    // cout << len << endl;
    string firstDigits = num.substr(0, len - 3);
    string last3Digits = num.substr(len - 3, 3);
    // cout << last3Digits << endl;
    number = stoi(last3Digits);
    if (div8.find(number) != div8.end())
    {
        cout << num << endl;
        return;
    }
    else
    {
        int newNum = number - (number % 10);
        for (int i = newNum; i < newNum + 10; i++)
        {
            if (div8.find(i) != div8.end())
            {
                cout << firstDigits << last3Digits.substr(0, 2);
                cout << i % 10 << endl;
                return;
            }
        }
    }

    return;
}

int main()
{
    // your code goes here
    for (int i = 8; i < 1000; i += 8)
    {
        div8.insert(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
