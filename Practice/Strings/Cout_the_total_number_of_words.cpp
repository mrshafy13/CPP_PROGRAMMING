#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout <<"Input the string : ";
    getline(cin, str);
    int len = 0, words = 1;
    while(str[len] != '\0')
    {
        if(str[len] ==' ')
        {
            words++;
        }
        len++;
    }
    cout << "Total number of words in the string is : "<< words;
    return 0;
}