//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e8;
//int numbers[mx];

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
        int a, b, c;
        cin >> a >> b >> c;
        int num[3];
        num[0] = a;
        num[1] = b;
        num[2] = c;
        sort(num, num+2);
        a = num[0];
        b = num[1];
        c = num[3];
        if(a == b)
        {
            c  += 5;
        }
        else
        {
            for(int i = 1; i<=5;i++)
            {
                if(b>c)
                {
                    c++;
                }
                else
                {
                    b++;
                }
            }
        }
        cout << a*b*c << endl;
    }
    return 0;
}