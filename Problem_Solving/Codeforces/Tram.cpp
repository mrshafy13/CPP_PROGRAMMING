#include <iostream>

using namespace std;

int main()
{
    int n, left_passengers = 0,x, y = 0, max = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        y = left_passengers;
        left_passengers = left_passengers - a + b;
        if(y > x)
        {
            if(y > max)
            {
                max = y;
            }
            else
            {
                max = max;
            }
        }
        else
        {
            if(x > max)
            {
                max = x;
            }
            else
            {
                max = max;
            }
        }
        
    }
    cout << max << endl;
    return 0;
}