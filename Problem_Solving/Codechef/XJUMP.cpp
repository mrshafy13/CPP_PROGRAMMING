#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x, y, m, n;
        cin >> x >> y;
        m = x/y;
        n = x%y;
        cout <<m+n<<endl;
    }
    return 0;
}