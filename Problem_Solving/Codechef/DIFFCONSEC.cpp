#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i<= t; i++)
    {
        int x = 0;
        cin >> n;
        char binary[n];
        cin >> binary;
        for(int j = 0; j< n-1; j++)
        {
            if(binary[j]==binary[j+1])
            {
                x++;
            }
        }
        cout <<x<<endl;
    }
    return 0;
}
