#include <iostream>

using namespace std;

struct perks
{
    int key_number;
    char car[12];
}mr_smith = {
        7,
        "Mercedes"
    };

    perks ms_jones = {
        10,
        "BMW"
    };

int main()
{
    cout << endl;
    cout << "Mr. Smith's Car is a " << mr_smith.car << " and it's key number is " << mr_smith.key_number << endl;
    
    cout << "Ms. Jones's Car is a " << ms_jones.car << " and it's key number is " << ms_jones.key_number << endl;
    
    cout << endl;
    
    return 0;
}