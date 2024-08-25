// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e8;
// int numbers[mx];

#define memset(a, b) memset(a, b, sizeof(a));
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int x;
    cin >> x;

    int sum = 0;
    while (x != 0)
    {
        if(x%2 == 1)
        {
            sum++;
        }
        
        x = x / 2;
        
    }
    cout << sum << endl;
    return 0;
}