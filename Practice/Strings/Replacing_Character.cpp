#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    cout << endl;

    cout << "The given sentence is : ";

    cout << str << endl;

    int len = str.size();

    for(int i = 0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = tolower(str[i]);
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i]=str[i];
        }
    }

    cout << endl;
    cout << "After Case Changed The String Is : ";
    cout << str << endl;
    cout << endl;
    return 0;
}