//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 9999+1;
bool numbers[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();

    for(int i = 1; i < mx; i++)
    {
        string s = to_string(i);
        for(int j = 0; j<s.size(); j++)
        {
            if(s[j] == '4' || s[j] == '7')
            {
                numbers[i] = true;
            }
            else
            {
                numbers[i] = false;
                break;
            }
        }
    }
    int t;
    cin >> t;
    if(numbers[t])
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        for(int i = 0; i<t/2+1; i++)
        {
            if(numbers[i])
            {
                if(t % i == 0)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
        cout << "NO" << endl;
    }
    
    return 0;
}