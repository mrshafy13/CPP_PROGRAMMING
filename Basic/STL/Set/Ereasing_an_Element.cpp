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
    set<int> s = {1,2,3, 4, 9, 6};
    //s.erase(2);

    /*for(auto u : s)
    {
        cout << u << endl;
    }*/

    s.erase(s.begin());
    
    for(auto u : s)
    {
        cout << u << endl;
    }

    s.erase(s.end());
    
    return 0;
}