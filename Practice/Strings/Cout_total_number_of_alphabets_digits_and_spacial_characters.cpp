#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int a = 0, d = 0, s = 0;
    int len = str.size();
    for (int i = 0;i < len;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            a++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }
        else
        {
            s++;
        }
    }
    cout << "Number of Alphabets in the string is : "<< a <<endl;
    cout << "Number of Digits in the string is : " << d << endl;
    cout << "Number of Special characters int the string is : "<< s << endl;
    
    return 0;
}