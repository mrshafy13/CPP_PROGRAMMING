#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    if(s1 == s2)
    {
        cout << "Strings are equal" <<endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}