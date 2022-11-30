#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char str[n];
        cin.get();
        gets(str);
        int s = 0;
        for(int i = 0; i< n; i++)
        {
            if(str[i]>=s)
            {
                s=str[i];
            }
        }
        cout << (s-97)+1 <<endl;
    }
    return 0;
}