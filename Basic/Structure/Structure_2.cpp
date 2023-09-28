#include <iostream>
#include <string>
using namespace std;

struct inflatable
{
    string name;
    float volume;
    double price;
};

int main()
{
    inflatable duck =
    {
        "Daphne", 0.12, 9.98
    };
    cout << duck.name <<endl; 
    cout << duck.volume <<endl;
    cout << duck.price << endl;
    return 0;
}