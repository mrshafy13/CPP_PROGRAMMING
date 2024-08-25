//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    set<int> set1, set2;
    for(int i = 1; i<=n; i++)
    {
        int a;
        cin >> a;
        set1.insert(a);
    }
    for(int i = 1; i<=m; i++)
    {
        int a;
        cin >> a;
        set2.insert(a);
    }
    for(auto u : set1)
    {
        if(u>k)
        {
            set1.erase(u);
        }
    }
    for(auto u : set2)
    {
        if(u > k)
        {
            set2.erase(u);
        }
    }
    bool found = 1;
    int counter_1 = 0, counter_2 = 0;
    for(int i = 1; i<= n; i++)
    {
        if(found)
        {
            if(set1.count(i) == 1);
            {
                if(counter_1 < k/2)
                {
                    found = 1;
                    counter_1++;
                }
                else
                {
                    found = 0;
                }
            }
        }
        else
        {
            if(set2.count(i) == 1)
            {
                if(counter_2 < k/2)
                {
                    found = 1;
                    counter_2++;
                }
            }
        }
        if(!found)
        {
            break;
        }
    }
    if(found && counter_1 == k/2 && counter_2 == k/2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}