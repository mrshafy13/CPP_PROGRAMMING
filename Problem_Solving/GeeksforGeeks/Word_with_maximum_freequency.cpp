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
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s);

        s = c + s;

        string tmp;
        vector<string> v;
        for(auto u : s)
        {
            if(isspace(u))
            {
                v.push_back(tmp);
                tmp.clear();
            }
            else
            {
                tmp += u;
            }
        }
        v.push_back(tmp);
        map <string, int> cnt;
        int mxfreq = 0;
        for(auto u: v)
        {
            cnt[u]++;
            mxfreq = max(mxfreq, cnt[u]);
        }

        string ans;
        for(auto u : v)
        {
            if(cnt[u] == mxfreq)
            {
                ans = u;
                break;
            }
        }
        cout << ans << " "<<mxfreq<< endl;
        
    }
    return 0;
}