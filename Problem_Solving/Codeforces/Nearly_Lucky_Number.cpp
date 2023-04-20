#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    string str = to_string(n);
    int count = 0;
    int len = str.size();
    for(int i = 0; i < len; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            count++;
        }
    }
    if((count == 7) || (count == 4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}