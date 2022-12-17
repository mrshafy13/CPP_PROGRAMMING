#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.get();
    while(t--)
    {
        char answer[50];
        char reverse[50];
        gets(answer);
        int len = strlen(answer);
        int flag, check;
        if(answer[0]=='Y')
        {
            flag = 0;
        }
        else if(answer[0]=='e')
        {
            flag = 1;
        }
        else if(answer[0]=='s')
        {
            flag = 2;
        }

        if(flag == 0)
        {
            for(int i = 0; i<len; i+2)
            {
                if(answer[i]=='Y' || answer[i]=='s')
                {
                    check = 0;
                }
                else
                {
                    check = 1;
                }
            }
        }


    }
    return 0;
}