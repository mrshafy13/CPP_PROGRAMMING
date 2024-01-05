//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        if(a == 1)
        {
            if(check_prime(b))
            cout << b*b << endl;
        }
        else if(b%a == 0)
        {
            long long result = b * (b/a);
            cout << result << endl;
        }
        else
        {
            if(a%2 == 0 && b % 2 == 0)
            {
                cout << (a * b)/gcd(a,b) << endl;
            }
            else
            {
                cout << a*b/ gcd(a, b) << endl;
            }
        }
    }
    return 0;
}