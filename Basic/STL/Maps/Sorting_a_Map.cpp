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
    map <string, int> id;
    id["shafy"] = 1;
    id["rafy"] = 2;
    id["miha"] = 3; 

    for(auto u : id)
    {
        cout << u.first <<" " << u.second << endl;
    }
    return 0;
}