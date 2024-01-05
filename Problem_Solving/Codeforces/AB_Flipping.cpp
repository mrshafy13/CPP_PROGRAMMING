// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
const int mx = 1e8;
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
        int length;
        cin >> length;
        
        string s;
        cin >> s;
        
        int count = length - 1;
        for(int i = length-1; i>=0; i--)
        {
            if(s[i] == 'A')
            {
                count--;
            }
            else
            {
                break;
            }
        }
        for(int i =0; i<length; i++)
        {
            if(s[i] == 'B')
            {
                count--;
            }
            else
            {
                break;
            }
        }
        if(count>=0)
        {
            cout << count << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}