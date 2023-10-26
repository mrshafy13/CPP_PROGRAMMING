#include <bits/stdc++.h>
using namespace std;

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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int un = unique(v.begin(), v.end()) - v.begin();
        if (un == x)
        {
            cout << "Good" << endl;
        }
        else if (un > x)
        {
            cout << "Average" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}