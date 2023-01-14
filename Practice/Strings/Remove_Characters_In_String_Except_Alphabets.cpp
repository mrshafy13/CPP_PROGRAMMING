#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout  << "Input the string : ";
    getline(cin, str);

    int len = str.size();
    int flag = 0;
    for(int i = 0; i<len; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            continue;
        }
        else
        {
            str[i] = NULL;
            flag = 1;
        }
    }
    cout << endl;
    cout << "After Removing The Output : ";
    cout << str << endl;
    return 0;
}