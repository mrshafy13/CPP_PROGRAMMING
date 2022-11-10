#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int l = 0;
    cout<< "Input the string : ";
    getline(cin, str);
    while (str[l] != '\0')
    {
        cout << str[l] << "   ";
        l++;
    }
    return 0;
}