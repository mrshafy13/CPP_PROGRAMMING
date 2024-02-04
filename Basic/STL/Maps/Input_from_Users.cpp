//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    map<string, int> id;
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        string s;
        int d;
        cin >> s >> d;
        id[s] = d;
    }
    for(auto u : id)
    {
        if(u.second == 2)
        {
            cout << u.first << endl;
        }
    }
    return 0;
}