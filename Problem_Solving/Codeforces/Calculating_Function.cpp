#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, result;
    cin >> n;
    if(n % 2 == 0)
    {
        result = n/2;
    }
    else
    {
        result = -n + n/2;
    }
    cout << result << endl;
    return 0;
}