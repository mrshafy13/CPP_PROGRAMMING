#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int count_U = 0;
        int count_D = 0;

        int length = s.size();

        for(int i = 0; i<length;i++)
        {
            if(s[i]!=s[i+1])
            {
                if(s[i] == 'U')
                {
                    count_D++;
                }
                else
                {
                    count_U++;
                }
            }
            else
            {
                continue;
            }
        }
        if (count_D > count_U)
        {
            cout << count_U <<endl;
        }
        else
        {
            cout << count_D << endl;
        }

    }
    return 0;
}