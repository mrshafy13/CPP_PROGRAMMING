#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int len = s.size();

    int count = 0;

    for(int i = 0; i< len; i++)
    {
        int n = len - (1 + i);
        if(s[i]==t[n])
        {
            count++;
        }
    }
    if(count == len)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}