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
    string s = "deacbAAA";
    cout << *max_element(s.begin(),s.end()) << endl;
    cout << *min_element(s.begin(),s.end()) << endl;
    return 0;
}