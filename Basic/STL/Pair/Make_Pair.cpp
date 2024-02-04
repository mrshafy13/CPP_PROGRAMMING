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
    pair < int, int > p;
    p = make_pair(2,3);
    cout << p.first <<" " << p.second << endl;
    p = {4,5};
    cout << p.first << " " << p.second << endl;
    pair < string, vector<int> > x;
    x = {"Shafy", {1,2,3,4}};
    cout << x.first << " " << x.second.size() << endl;
    return 0;
}