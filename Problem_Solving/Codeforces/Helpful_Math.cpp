#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.size();

    int arr[len];

    int count = 0;

    for(int i = 0; i<len; i++)
    {
        if(str[i]=='+')
        {
            continue;
        }
        else
        {
            arr[count++]=str[i]-'0';
        }
    }

    sort(arr, arr+count);

    for(int i = 0; i<count; i++)
    {
        cout << arr[i];
        if(i==count-1)
        {
            break;
        }
        cout <<"+";
    }

    return 0;
}