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
    optimize();
    int t;
    cin >> t;
    int sum_a = 0, sum_b = 0, sum_c =0;
    for(int i = 1; i<=t;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sum_a = sum_a + a;
        sum_b = sum_b + b;
        sum_c = sum_c + c;
    }
    if(sum_a == 0)
        {
            if(sum_b == 0)
            {
                if(sum_c == 0)
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}