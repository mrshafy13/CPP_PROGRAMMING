#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.size();
    int vowel = 0, consonant = 0, spacial = 0;
    for(int i = 0; i<len; i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'|| str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            vowel++;
        }
        else if((str[i]>= 'a' && str[i]<='z') || (str[i] >= 'A' && str[i] <= 'Z' ))
        {
            consonant++;
        }
    }

    cout << vowel << endl;
    cout << consonant << endl;

    return 0;
}