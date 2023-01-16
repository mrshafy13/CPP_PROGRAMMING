#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Input the string: ";
    getline(cin, str);

    int length, x, y, z = 0, start, end;
    length = str.size();

    for(int i = 0; i < length; i++)
    {
        while(str[i] != ' ')
        {
            z = 0;
            z++;
        }
        if(z>z)
        {
            start = i-z;
            end = z;
        }
    }

    cout << "The Largest Word is: ";

    for(int i = start; i <= end; i++)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}