#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Input the first string: ";
    getline(cin, str1);
    cout << "Input the second string: ";
    getline(cin, str2);

    str1 = str1 +" "+ str2;

    cout<< "After concatenation the string is: " << str1 <<endl;
    return 0;
}