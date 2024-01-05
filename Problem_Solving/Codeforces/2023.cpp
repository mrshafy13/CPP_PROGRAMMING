// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

const int mx = 6;
int numbers[mx];

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
        memset(numbers, 0);
        int n, k;
        long long product = 1;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            product = product * numbers[i];
        }
        if (product > 2023)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i <= 2023; i++)
            {
                int count;
                count = product;
                count = count * i;

                if (count == 2023)
                {
                    product = count;
                    numbers[n] = i;
                    break;
                }
            }
            if (product == 2023)
            {
                cout << "YES" << endl;
                if (k >= 2)
                {

                    cout << numbers[n] << " ";
                    for (int i = 2; i <= k; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << numbers[n] << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}