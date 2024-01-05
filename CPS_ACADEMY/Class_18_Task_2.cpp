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
    int h, w;
    while(cin >> h && cin >> w)
    {
        if(h == 0 and w == 0)
        {
            break;
        }
        else
        {
            for(int i = 1; i<=h; i++)
            {
                for(int j = 1; j<=w;j++)
                {
                    
                    if(i == 1 || i == h)
                    {
                        cout << "#";
                    }
                    else
                    {
                        if(j == 1 || j == w)
                        {
                            cout << "#";
                        }
                        else
                        {
                            cout << ".";
                        }
                    }
                }
                
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}