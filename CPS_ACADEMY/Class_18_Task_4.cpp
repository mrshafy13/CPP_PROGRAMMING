#include<bits/stdc++.h>
using namespace std;


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n, k, m, a, sum = 0;
    cin >> n >> k >> m;
    int score_need = n * m;
    int score_scored = 0;
    for(int i = 1; i<n; i++)
    {
        cin >> a;
        score_scored = score_scored + a;
    }
    int to_score = score_need - score_scored;
    if(to_score <= 0)
    {
        cout << 0 << endl;
    }
    else if(to_score > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << to_score << endl;
    }
    return 0;
}