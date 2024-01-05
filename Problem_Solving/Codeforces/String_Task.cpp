#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
bool isVowel ( char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main()
{
    optimize();
    string s, ans;

    cin >> s;
    for(auto u : s)
    {
        char c = tolower(u);
        {
            if ( !isVowel (c))
            {
                ans+= '.';
                ans += c;
            }
        }
    }
    cout << ans << endl;

    return 0;
}