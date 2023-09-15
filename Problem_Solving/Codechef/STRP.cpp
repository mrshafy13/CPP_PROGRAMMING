#include<bits/stdc++.h>
using namespace std;

const int mx = 10e5;
char series[mx];

int main()
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--)
    {
        int n, time = 0;
        cin >> n;
        for(int i = 1; i<=n; i++)
        {
            cin >> series[i];
        }
        for(int i = 1; i<=n; i++)
        {
            if(series[i]==series[i+1])
            {
                time++;
                i++;
            }
            else
            {
                time++;
            }
        }
        cout << time << endl;
    }
    return 0;
}