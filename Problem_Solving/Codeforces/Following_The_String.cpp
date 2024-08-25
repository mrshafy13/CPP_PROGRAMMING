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
        int n;
        cin >> n;
        vector < int > v;
        map<int, int> occ;
        for(int i = 0; i<n;i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int value = 97;
        for(auto u : v)
        {
            if(u == 0)
            {
                char temp = value;
                cout  << temp ;
                occ[value]++;
                value++;
            }
            else if( u != 0)
            {
                for(auto i : occ)
                {
                    if(i.second == u)
                    {
                        char temp = i.first;
                        cout << temp ;
                        occ[i.first]++;
                        break;
                    }
                }
            }
            

        }

        cout << endl;
    }
    

    return 0;
}