#include <bits/stdc++.h>
using namespace std;
const int mx = 10;
int results[mx];
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int number;
        cin >> number;
        
        if(number>45)
        {
            cout << "-1" << endl;;
        }
        else
        {
            for(int i = 0; i<mx; i++)
            {
                results[i] = 0;
            }
            for(int i = 9; i>= 1;i--)
            {
                if(number >= i)
                {
                    results[i] = i;
                    number = number - i;
                }
                else
                {
                    continue;
                }
            }
            for(int i = 1; i<mx; i++)
            {
                if(results[i]!=0)
                cout << results[i];
            }
            cout << endl;
        }       
    }
    return 0;
}