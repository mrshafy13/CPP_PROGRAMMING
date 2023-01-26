#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1 ; i<= t; i++)
    {
        int follower, following, result;
        cin >> following >> follower;

        result = follower*10;

        if(result<following)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}