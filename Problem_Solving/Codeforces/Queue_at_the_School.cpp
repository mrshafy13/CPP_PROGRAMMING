#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char queue[n];
    cin >> queue;

    while(t--)
    {
        for(int i = 0;i < n; i++)
        {
            int flag = 0;
            if(queue[i]=='B' && queue[i+1]=='G')
            {
                flag = 1;
                swap(queue[i], queue[i+1]);
            }
            if(flag == 1)
            {
                i++;
                continue;
            }
        }
    }
    cout << queue << endl;
    return 0;
}