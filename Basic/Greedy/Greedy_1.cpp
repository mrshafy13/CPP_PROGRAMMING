#include <bits/stdc++.h>

using namespace std;
int numbers[25];
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        numbers[count] = n%10;
        n = n/10;
        count++;
    }
    
    for(int i = 0, j = count - 1; i<j ; i++, j--)
    {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
    
    int temp = numbers[0];

    for (int i = 0; i< count; i++)
    {
        int rev = 9 - numbers[i];
        if (rev <  numbers[i])
        {
            numbers[i] = rev;
        }
    }
    if(numbers[0]==0)
    {
        numbers[0] = temp;
    }
    for(int i = 0; i<count; i++)
    {
        cout << numbers[i];
    }
    cout << endl;
    
}

