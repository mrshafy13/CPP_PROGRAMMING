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
        vector<int> permutation;
        int subarrays = 1;
        for(int i = 0 ;i<n;i++)
        {  
            int a;
            cin >> a;
            permutation.push_back(a);
        }
        sort(permutation.begin(), permutation.end());
        for(auto u : permutation)
        {
            if(u!=1 && u!=2)
            {
                if(u%3 == 0)
                {
                    cout << u/3 + 1 << " ";
                }
                else 
                {
                    cout << 2 << " ";
                }
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}