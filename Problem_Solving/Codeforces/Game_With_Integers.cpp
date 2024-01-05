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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count;
        for(int i = 1; i<=10;i++)
        {
            n = n+1;
            if(n>=3 && n % 3 == 0)
            {
                if(i % 2 == 0)
                {
                    cout << "Second" << endl;
                }
                else
                {
                    cout << "First" << endl;
                }
                break;
            }
            cout << n <<" ";
        }
    }
    return 0;
}