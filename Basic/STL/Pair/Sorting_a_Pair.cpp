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
    vector <pair <string, int>> v;
    v.push_back({"shahriar", 21});
    v.push_back({"momo", 13});
    v.push_back({"sharif", 34});
    v.push_back({"shahriar", 35});
    v.push_back({"sharif", 34});
    sort(v.begin(), v.end());

    for(auto u:v)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}