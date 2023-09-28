#include <iostream>

using namespace std;

const int ArSize = 20;

int main()
{
    char name[ArSize];
    char dessert[ArSize];
    cout<<"Enter Your Name: \n";
    cin >> name;
    cout<<"Enter Your Favorite Dessert:\n";
    cin >> dessert;
    cout<<"I Have some delicious "<<dessert;
    cout<<" for you, "<<name<<"."<<endl;

    return 0;
}