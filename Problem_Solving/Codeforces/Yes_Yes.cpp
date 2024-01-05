//Bismillahir Rahmanir Raheem
#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

const int mx = 1e8;

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        //cout << t << endl;
        string  str;
        cin >> str;
        bool flag = 0;
        if(str.size() > 2)
        {
            for(int i = 0; i<str.size() - 1;)
            {
                if(str[i] == 'Y')
                {
                    i++;
                    if(str[i] == 'e')
                    {
                        i++;
                        if(str[i] == 's')
                        {
                            i++;
                            flag = 1;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else if(str[i] == 'e')
                {
                    i++;
                    if(str[i] =='s')
                    {
                        i++;
                        if(str[i] == 'Y')
                        {
                            
                            flag = 1;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else if(str[i] == 's')
                {
                    i++;
                    if(str[i] == 'Y')
                    {
                        i++;
                        if(str[i]=='e')
                        {
                            
                            flag  = 1;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }

            }
        }
        else if(str.size() == 2)
        {
            if(str[0] == 'Y' && str[1] == 'e')
            {
                flag = 1;
            }
            else if(str[0] == 's' && str[1] == 'Y')
            {
                flag = 1;
            }
            else if(str[0]=='e' && str[1]== 's')
            {
                flag = 1;
            }
            else
            {
                flag  = 0;
            }
        }
        else
        {
            if(str[0] == 'Y' or str[0] == 'e' or str[0] == 's')
            {
                continue;
            }
            else
            {
                flag = 0;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }    
    return 0;
}