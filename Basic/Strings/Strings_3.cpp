#include <iostream>

using namespace std;
const int ArSize = 20;
int main()
{
    char name[ArSize];
    char dessert[ArSize];


    cout << "Enter your name:\n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout <<"I have some delicious "<<dessert;
    cout <<" for you, "<<name<<"."<<endl;
    return 0;
}