#include<bits/stdc++.h>
using namespace std;

const int mx = 1e3+1;



#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();

    int n;
    cin >> n;
    vector <int> v(n);    
    for(int i = 0; i< n; i++)
    {
        cin >> v[i];
    }
    int turn = 1;
    int sereja = 0, dima = 0;
    while(v.empty()!=true)
    {
        if (turn == 1)
        {
            if (v[0] > v.back())
            {
                sereja = sereja + v[0];
                reverse(v.begin(), v.end());
                v.pop_back();
            }
            else
            {
                sereja = sereja + v.back();
                v.pop_back();
            }
            turn = 2;
        }
        else
        {
            if (v[0] > v.back())
            {
                dima = dima + v[0];
                reverse(v.begin(), v.end());
                v.pop_back();
            }
            else
            {
                dima = dima + v.back();
                v.pop_back();
            }
            turn = 1;
        }
    }


    cout << sereja << " " << dima << endl;
    return 0;
}