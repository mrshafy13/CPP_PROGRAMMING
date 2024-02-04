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
    vector <long long>  v = {-1, -1, 1, 101202356495486548, 12189431894535131, 101202356495486548, 101202356495486548};
    map <long long, int> cnt;
    
    for( auto u : v)
    {
        cnt[u]++;
    }
    cout << cnt[101202356495486548] << endl;

    for (auto u : cnt)
    {
        cout << u.first << " " << u.second << endl;
    }
    vector <string> name = {"shafy", "rafy", "miha", "nahid", "nahid"};
    map <string, int> freq;
    for(auto u : name)
    {
        freq[u]++;
    }
    for(auto u : freq)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}