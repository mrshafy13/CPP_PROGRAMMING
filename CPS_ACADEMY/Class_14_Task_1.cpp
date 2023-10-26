#include<bits/stdc++.h>
using namespace std;

const int mx = 2;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int a, b;
    cin >> a;
    cin >> b;
    numbers[0] = a;
    numbers[1] = b;
    
    sort(numbers, numbers+mx);
    for(int i = 0; i<mx; i++)
    {
        if(i == 0)
        {
            if(numbers[i] == 1)
            {
                if(numbers[i+1]==2)
                {
                    cout << 3 << endl;
                    break;
                }
                else
                {
                    cout << 2 << endl;
                    break;
                }
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}