#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    s2 = s1;
    int len = s2.size();
    cout <<"The first string is : " << s1 <<endl;
    cout <<"The Second string is : " << s2 <<endl;
    cout <<"Number of characters copied : "<<len << endl;

    return 0;
}