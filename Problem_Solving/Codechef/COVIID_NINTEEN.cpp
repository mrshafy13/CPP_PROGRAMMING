#include<bits/stdc++.h>
using namespace std;

const int mx = 10e5;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int rows, seat;
        cin >> rows >> seat;
        if(rows % 2 == 0)
        {
            rows = rows/2;
        }
        else
        {
            rows = rows/2+1;
        }
        if(seat % 2 == 0)
        {
            seat = seat / 2;
        }
        else
        {
            seat = seat / 2 + 1;
        }
        cout << seat*rows << endl;
    }
    return 0;
}