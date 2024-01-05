//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 4;


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
        string s;
        string str;
        bool f = true;
        int point;
        int count[mx] = {0};
        for(int i = 0; i<3;i++)
        {
            cin >> str;
            s = s+str;
        }
        int a = 0, b = 0, c = 0;

        s.erase(remove(s.begin(),s.end(), '?'), s.end());
        
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'A')
            {
                a++;
            }
            else if( s[i]== 'B')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(a==2)
        {
            cout << "A" << endl;
        }
        else if( b==2)
        {
            cout << "B" << endl;
        }
        else if(c==2)
        {
            cout << "C" << endl;
        }
    }
    return 0;
}
