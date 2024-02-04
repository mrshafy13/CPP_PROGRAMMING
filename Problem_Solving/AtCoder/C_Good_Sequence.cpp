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
    long long n;
    cin >> n;
    map<long long, long long> freq;
    while(n--)
    {
        long long a;
        cin >> a;
        
        freq[a]++;
    }
    long long result = 0;
    for(auto u: freq)
    {
        if(u.first != u.second)
        {
            if(u.first> u.second)
            {
                result  = result + u.second;
            }
            else
            {
                result = result + (u.second - u.first);
            }
        }
    }
    cout << result << endl;
    return 0;
}