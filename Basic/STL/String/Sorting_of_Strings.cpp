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
    
    vector <string> v;
    v.push_back("Emon");
    v.push_back("Mumu");
    v.push_back("Tamima");
    v.push_back("Shafy");
    sort (v.begin(), v.end());
    
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}