//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    string s;
    cin >> s;
    int h = 0, e = 0, l = 0 , o = 0;
    for(auto u : s)
    {
        char temp = u;
        if( temp == 'h')
        {
            h++;
        }
        else if(h >= 1 && temp == 'e')
        {
            e++;
        }
        else if(e >= 1 && temp == 'l')
        {
            l++;
        }
        else if(l >= 2 && temp == 'o')
        {
            o++;
        }
        
    }
    if (h >= 1 && e >= 1 && l >= 2 && o >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}