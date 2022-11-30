/**
 * The function takes a string as input and sorts it in ascending order
 * 
 * @return The number of times the inner loop has been executed.
 */
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Input a string : ";
    getline(cin, str);
    int len = str.size();
    char temp;
    int loop1= 0, loop2=0;
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
            loop1++;
        }
        loop2++;
        if(flag == 1)
        {
            break;
        }
    }
    cout << "After sorting the string appears like : ";
    cout << str;
    cout <<"\n";
    return 0;
}