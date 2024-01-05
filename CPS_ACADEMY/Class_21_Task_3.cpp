#include<bits/stdc++.h>
using namespace std;

const int mx = 14;
bool s[mx];
bool h[mx];
bool c[mx];
bool d[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";


int main()
{
    optimize();
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        char type; int a;
        cin >> type >> a;
        if(type=='S')
        {
            s[a] = true;
        }
        else if(type == 'H')
        {
            h[a] = true;
        }
        else if(type == 'C')
        {
            c[a] = true;
        }
        else if(type == 'D')
        {
            d[a] = true;
        }
    }
    for(int i = 1; i<=13; i++)
    {
        if(s[i]==false)
        cout << "S" << " " << i << endl; 
    }
    for(int i = 1; i<=13; i++)
    {
        if(h[i]==false)
        cout << "H" << " " << i << endl; 
    }
    for(int i = 1; i<=13; i++)
    {
        if(c[i]==false)
        cout << "C" << " " << i << endl; 
    }
    for(int i = 1; i<=13; i++)
    {
        if(d[i]==false)
        cout << "D" << " " << i << endl; 
    }
    return 0;
}