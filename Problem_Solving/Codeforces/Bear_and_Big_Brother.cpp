#include <iostream>

using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    do
    {
        a = a*3;
        b = b*2;
        count++;
    }while(a<=b);
    cout << count << endl;
    return 0;
}