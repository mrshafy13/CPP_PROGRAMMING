#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i  < len; i++)
    {
        if(str[i]==str[i-1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}