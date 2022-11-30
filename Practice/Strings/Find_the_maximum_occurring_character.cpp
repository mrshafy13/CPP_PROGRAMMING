#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int ch_fre[255];
    int i = 0, max;
    int ascii;

    cout << "Input the string : ";
    getline(cin, str);


    for(i = 0; i < 255; i++)
    {
        ch_fre[i] = 0;
    }

    i = 0;

    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;

        i++;
    }

    max = 0;

    for (i = 0; i<255; i++)
    {
        if(i!=32)
        {
            if(ch_fre[i]> ch_fre[max])
            {
                max = i;
            }
        }
    }
    cout << "The highest frequency of charater '" << (char)max << "'\nappears number of time : "<< ch_fre[max] <<"\n\n"<<endl;
    return 0;
}