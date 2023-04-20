#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char temp[n];
    int count_A = 0, count_D = 0;
    cin >> temp;

    for(int i = 0; i < n ; i++)
    {
        if(temp[i]=='A')
        {
            count_A++;
        }
        else
        {
            count_D++;
        }
    }
    if(count_A > count_D)
    {
        cout << "Anton" << endl;
    }
    else if( count_A == count_D)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    return 0;
}