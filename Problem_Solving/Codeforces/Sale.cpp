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
    int n, c;
    cin >> n >> c;
    vector <int> v;
    for (int i = 1; i<=n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int sum = 0;
    for (int i = 0; i<c; i++)
    {
        if(v[i]< 0)
        {
            sum = sum + abs(v[i]);
        }
        else
        {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}