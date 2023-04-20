#include <iostream>
#include <string>
using namespace std;

void con_lower(string s1)
{
    int len = s1.size();
    for(int i = 0; i < len; i++)
    {
        s1[i] = tolower(s1[i]);
    }
    cout << s1 << endl;
}

void con_upper(string s1)
{
    int len = s1.size();
    for(int i = 0; i < len; i++)
    {
        s1[i] = toupper(s1[i]);
    }
    cout << s1 << endl;
}

int main()
{
    string str;
    cin >> str;
    int len = str.size();
    int upper=0, lower=0;

    for(int i = 0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper)
    {
        con_lower(str);
    }
    else
    {
        con_upper(str);
    }
    return 0;
}