#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n+1] = {0};
    int p,q, lvl;
    cin >> p;
    for(int i = 0; i<p;i++)
    {
        cin >> lvl;
        array[lvl]=1;
    }
    cin >> q;
    for(int i = 0; i<q;i++)
    {
        cin >> lvl;
        array[lvl] = 1;
    }
    for(int i = 1; i<=n; i++)
    {
        if(array[i]==0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy."<<endl;
    return 0;
}