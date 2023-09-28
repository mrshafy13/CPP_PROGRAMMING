#include <iostream>

using namespace std;
const int ArSize = 20;
int main()
{
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter Your Name: \n";
    cin.get(name, ArSize).get();
    cout<<"Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout<<"I have some delicious "<< dessert;
    cout<< " for you, "<<name<<".\n";
    return 0;
}