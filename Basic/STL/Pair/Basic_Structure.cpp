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
    pair <int, int> p;
    p.first = 2;
    p.second = 3;
    pair <string , vector<int> > name;
    name.first = "Shafy";
    name.second = {24, 1999, 2};
    cout << name.first << endl;
    for( auto u : name.second)
    {
        cout << u << " ";
    }
    cout << endl;
    //taking input
    pair <int , int> v;
    cin >> v.first >> v.second;
    cout << v.first << " " << v.second;
    return 0;
}