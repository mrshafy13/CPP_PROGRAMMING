#include <bits/stdc++.h>

using namespace std;
const int mx=2e5+123;
int number[mx];

int main()
{
    int number_of_elements;
    cin >> number_of_elements;

    for(int i= 1; i<= number_of_elements; i++)
    {
        cin >> number[i];
    }

    long long answer = 0;

    for(int i = 2; i<=number_of_elements; i++)
    {
        if(number[i]<number[i-1])
        {
            answer += number[i-1] - number[i];
            number[i] = number[i-1];
        }
    }
    cout << answer << endl;

    return 0;
}