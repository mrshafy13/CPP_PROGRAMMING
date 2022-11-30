#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int c = 0;
    cout << "Input a string : ";
    getline(cin, str);
    int len = str.size() + 1;
    char str2[len];
    int start;
    cout << "Input the position to start extraction : ";
    cin >> start;
    int length;
    cout << "Input the length of substring : ";
    cin >> length;
    while (c < length)
    {
        str2[c] = str[start + length - 1];
        c++;
    }
    
    cout << str2;
    return 0;
}