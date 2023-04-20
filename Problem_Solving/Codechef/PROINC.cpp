#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, buy, profit;
        cin >> x >> y;
        buy = x-y;
        x = x + (x*0.1);
        profit = x - buy;
        cout << profit << endl;
    }

    return 0;
}