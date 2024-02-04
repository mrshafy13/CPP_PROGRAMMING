//Bismillahir Rahmanir Raheem
//help needed
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0,  count_open = 0, count_closed = 0;
        bool is_open = 1;
        
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '(' && s[i+1] == ')')
            {
                i++;
                continue;
            }
            if (s[i] == '(')
            {
                count_open++;
            }
            else
            {
                count_closed++;
                if (count_open < count_closed)
                {
                    ans++;
                    count_closed--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}