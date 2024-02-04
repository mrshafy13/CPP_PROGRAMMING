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
    int s , n;
    cin >> s >> n;
    vector<int> x;
    vector <int> y;
    for(int i = 1; i<=n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    for(int i = 0; i<x.size();)
    {
        if(s > x[i])
        {
            s = s + y[i];
            int c = i+1;
            x.erase(x.begin()+i, x.begin()+c);
            y.erase(y.begin()+i, y.begin()+c);
            i = 0;
        }
        else
        {
            i++;
        }
    }
    if(x.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}