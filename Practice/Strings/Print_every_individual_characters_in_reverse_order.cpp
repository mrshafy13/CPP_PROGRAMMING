#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int len;
    cout << "Input a string : " ;
    getline(cin, str);
    len = str.size();
    while (len >= 0)
    {
        cout << str[len] << "   ";
        len--;
    }
    return 0;
}