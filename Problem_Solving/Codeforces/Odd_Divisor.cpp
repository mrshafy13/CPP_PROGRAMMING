// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8;
bool is_prime(unsigned long long n)
{
    int x;
    if (n % 2 == 0)
    {
        x = 0;
    }
    else
    {
        unsigned long long t = ceil(sqrt(n));
        for (unsigned long long i = 2; i <= t; i++)
        {
            if (n % i == 0)
            {
                x = 0;
                break;
            }
            else
            {
                x = 1;
            }
        }
    }
    return x;
};

#define memset(a, b) memset(a, b, sizeof(a));
#define optimize() ios_base::sync_with_stdio(0); // cin.tie(0);cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, t;
        cin >> n;
        bool flag = 0;
        t = ceil(sqrt(n));
        if (n < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (unsigned long long i = 3; i <= 99; i = i + 2)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}