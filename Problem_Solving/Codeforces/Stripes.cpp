#include <bits/stdc++.h>
using namespace std;
const int mx = 8;
char stripes[mx][mx];
int main()
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--)
    {
        cout << endl;
        for(int i = 0; i<mx; i++)
        {
            for(int j = 0; j<mx; j++)
            {
                cin >> stripes[i][j];
            }
        }
        int count_red = 0, count_blue = 0, log;
        int flag = 0;
        for(int i = 0; i<mx; i++)
        {            
            count_red = 0;
            for(int j = 0; j <mx; j++)
            {
                if(stripes[i][j] == 'R')
                {
                    count_red++;
                }
            }
            if(count_red == mx)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "R" << endl;
        }
        if(flag == 0)
        {
            cout << "B" << endl;
        }
    }

    return 0;
}