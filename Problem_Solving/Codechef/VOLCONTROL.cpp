#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int x, y, result;
        cin >> x >> y;
        result = abs(x-y);

        cout << result << endl;
    }

    return 0;
}