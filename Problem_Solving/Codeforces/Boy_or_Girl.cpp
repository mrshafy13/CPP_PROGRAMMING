#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    char temp;
    cin >> str;
    int len = str.size();
    for(int i = 0;i<len; i++)
    {
        int flag = 1;
        for(int j = 0; j < len-1; j++)
        {            
            if(str[j]>=str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                flag = 0;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i]==str[i-1])
        {
            count = count;
        }
        else
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else 
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}