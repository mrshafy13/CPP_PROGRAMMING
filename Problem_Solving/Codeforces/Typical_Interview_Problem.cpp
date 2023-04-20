/*Bismillahir Rahmanir Rahim*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        char s[k];
        cin >> s;

        int checker;
        int flag;
        if(s[0]=='F')
        {
            checker = 3;
        }
        else
        {
            checker = 5;
        }
        for(int i = 0; i<k; i++)
        {
            if((i+checker+1) % 3==0)
            {
                flag = 0;
                if(s[i]=='F')
                {
                    checker++;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if((i+checker+1) % 5 == 0)
            {
                flag = 0;
                if(s[i]=='B')
                {
                    checker++;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if((i+checker+1)%3 == 0 && (i+checker+1)%5 == 0)
            {
                if(s[i]=='F' && s[i+1]=='B')
                {
                    checker++;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
                i++;
            }
        cout << "YES" << endl;
    }
    return 0;
}