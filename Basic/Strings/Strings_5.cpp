#include <iostream>

using namespace std;

const int MAX_SIZE = 80;

int main()
{
    cout<<"What year was your house built?\n";
    int year;
    (cin >> year).get();
    cout<<"What is its street address?\n";
    char address[MAX_SIZE];
    cin.getline(address, MAX_SIZE);
    cout<< "Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}