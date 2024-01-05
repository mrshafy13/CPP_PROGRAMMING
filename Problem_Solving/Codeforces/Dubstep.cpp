//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    string str_1 = " ";
    string s;
    cin >> s;
    bool flag = 1;
    for(int i = 0; i<s.size();i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 2;
            if(!flag)
            {
                cout << " ";
            }
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }
    return 0;
}