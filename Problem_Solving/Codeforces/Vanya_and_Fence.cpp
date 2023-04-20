#include <iostream>

using namespace std;

int main()
{
    int n, h, band=0, stand=0;
    cin >> n >> h;
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if(a>h)
        {
            band++;
        }
        else
        {
            stand++;
        }
    }
    cout << 2 * band + stand << endl;
    return 0;
}