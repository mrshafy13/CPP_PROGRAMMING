#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string origin, character;
    cout << "Input the String: ";
    getline(cin, origin);

    //cin.get();

    cout << "Input the character to find frequency: ";
    getline(cin, character);

    int length, freq=0;
    
    length = origin.size();

    for(int i=0; i<length;i++)
    {
        if(origin[i]==character[0])
        {
            freq++;
        }
    }
    cout << "The frequency of '" << character << "' is: " << freq << endl; 
    return 0;
}