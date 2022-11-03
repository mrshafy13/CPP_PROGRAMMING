/**
 * The function takes two integers as input and prints out the sign of the difference between the two
 * integers
 */
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int x, y;
        cin>> x >> y;
        if(x<y)
        {
            cout<<"<"<<endl;
        }
        else if(x>y)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
}