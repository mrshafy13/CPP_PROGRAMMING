#include <iostream>

using namespace std;

int main()
{
    int horizontal, vertical;
    cin >> horizontal >> vertical;
    int count = 0;
    int x;
    if(horizontal >= vertical)
    {
        x = vertical;
    }
    else
    {
        x = horizontal;
    }
    while(x>0)
    {
        x=x-1;
        count++;
    }
    if(count % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    return 0;
}