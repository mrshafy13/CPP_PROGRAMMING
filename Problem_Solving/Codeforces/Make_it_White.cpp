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
        cin>>n;
        string s;
        cin >> s;
        int first, last = 0;
        
        for(int i = 0; i<n;i++)
        {
            if(s[i] == 'B')
            {

                first = i;
                break;
            }
        }
        
        for(int i = n-1; i>=first; i--)
            {
                if(s[i] == 'B')
                {
                    last = i;
                    break;
                }
            }

            cout << (last - first)+1  << endl;
        
    }    
    return 0;
}