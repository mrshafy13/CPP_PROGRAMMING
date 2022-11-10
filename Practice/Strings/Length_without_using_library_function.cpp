#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Input the string : ";
    getline(cin, str);
    int length = 0;
    for(int i = 0; str[i]!='\0'; i++)
    {
        length++;
    }
    cout << "Length of the string is : "<< length << endl;
    return 0;
}