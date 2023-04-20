#include <iostream>

using namespace std;

int main()
{
    int k, n, w, price=0, borrow=0;
    cin >> k >> n >> w;

    for(int i = 1; i <=w; i++)
    {
        price = price + k*i;
    }
    if(price > n)
    {
        borrow = price - n;
    }

    cout << borrow << endl;
    return 0;
}