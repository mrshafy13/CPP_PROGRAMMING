#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    cin >> number;
    long long length = number.size();
    int flag, count_of_four = 0;
    if(number[0]=='1')
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    
    if(flag == 1)
    {
        for(long long i = 1; i< length; i++)
        {
            if(number[i]== '1' || number[i] == '4')
            {
                flag = 1;
                if(number[i] == '4')
                {
                    count_of_four++;
                    if(count_of_four >= 3)
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    count_of_four = 0;
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    
    if(flag == 0)
    {
        cout << "NO" << endl;
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    return 0;
}
