#include <iostream>

using namespace std;

int main()
{
    int t, sum;
    cin >> t;
    for (int i = 1; i<=t; i++)
    {
        sum = 0;
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int j = 0; j<n;j++)
        {
            cin >> arr[j];
        }
        for(int k = 1; k<= q; k++)
        {
            int xm, ym , xx, yy;
            cin >> xm>> ym;
            xx = xm;
            yy = ym;
            xm = xm - 1;
            ym = ym - 1;
            for(xm=xm; xm<=ym; xm++)
            if(xm == 0 || xm % 2 ==0)
            {
                arr[xm] = arr[xm]+1;
                cout << arr[xm];
            }
            else
            {
                arr[xm] = arr[xm] - 1;
                cout << arr[xm];
            }
            
        }
        for(int h = 0; h<n;h++)
        {
            sum = sum+arr[h];
        }
        cout << sum << endl;
    }
    return 0;
}