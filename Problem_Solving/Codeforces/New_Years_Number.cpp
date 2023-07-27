#include <bits/stdc++.h>
using namespace std;
const long long mx = 10e9;
int main()

{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        long long number, checker;
        cin >> number;
        long long mod = number % 2020;
        long long div = number/ 2020;
        if(mod <= div)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}