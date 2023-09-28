#include <iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};
struct outflatable
{
    string name;
    float volume;
    double price;
};


int main()
{
    inflatable Vance = 
    {
        "Black_Rose",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "Vance: "<< Vance.name << " for $";
    cout << Vance.price << endl;


    choice = Vance;

    cout << "choice: " << choice.name << " for $ ";
    cout << choice.price << endl;

    return 0;
}