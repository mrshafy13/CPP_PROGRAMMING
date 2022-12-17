#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str << endl;

    int len = str.size();
    char temp;
    for(int i = 0; i< len; i++)
    {
        for(int j = 0; j < len-1; j++)
        {
            if(str[j]>str[j+2])
            {
                swap(str[j], str[j+2]);
            }
        }
    }
    cout << str << endl;
    return 0;
}