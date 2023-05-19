#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        long long n;
        cin >> n;
        long long max = 0;
        long long permutation[mx] = {0};
        long long position[n+1];
        for(long long int i = 1; i<=n;i++)
        {
            cin >> permutation[i];
            position[permutation[i]] = i;
        }
        for(long long int i = 1; i<=n; i++)
        {
            if(max <= (abs(position[i] - i)))
            {
                max = abs(position[i] - permutation[i]);
            }
        }
        cout << max << endl;
    }
    return 0;
}