#include<iostream>
using namespace std;

int	main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int x;
        cin >> x;
        if(x>100)
        {
            int y;
            y = x-10;
            cout<<y<<endl;
        }
        else
        {
            cout << x <<endl;
        }
        
    }


    
    return 0;
}

