#include <bits/stdc++.h>

using namespace std;

const int mx = 123;
int  x_coordinate[mx], y_coordinate[mx];

int main()
{
    int number_of_points;

    cin >> number_of_points;

    int maximum_length = 0;

    for(int i = 1; i<= number_of_points; i++)
    {
        cin >> x_coordinate[i] >> y_coordinate [i];
    }

    for(int i = 1; i<=number_of_points; i++)
    {
        for(int j = i+1; j <= number_of_points; j++)
        {
            int length = ((x_coordinate[i]-x_coordinate[j]) * (x_coordinate[i]-x_coordinate[j])) + ((y_coordinate[i]-y_coordinate[j]) * (y_coordinate[i]-y_coordinate[j]));
            if(length > maximum_length)
            {
                maximum_length = length;
            }
        }
    }
    
    cout << setprecision(mx) << sqrt(maximum_length) << endl;

    return 0;
}