#include <iostream>
const int max_size = 100;
using namespace std;

int main()
{
    char str[max_size];
    cin.get(str, max_size);
    
    cout<<"The string you entered is : ";
    cout << str <<endl;
    return 0;
}