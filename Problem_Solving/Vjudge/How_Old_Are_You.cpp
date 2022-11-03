#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        string today, today_date, today_month, today_year;
        string birthday, birthday_date, birthday_month, birthday_year;
        
        cin>> today;
        cin>> birthday;
        
        today_date = today[0]+today[1];
        today_month = today[3]+today[4];
        today_year = today[6]+today[7]+today[8]+today[9];

        birthday_date = birthday[0]+birthday[1];
        birthday_month = birthday[3]+birthday[4];
        birthday_year = birthday[6]+birthday[7]+birthday[8]+birthday[9];

        cout << today_date <<endl;
        cout << today_month <<endl;
        cout << today_year <<endl;

        cout << birthday_date <<endl;
        cout << birthday_month <<endl;
        cout << birthday_year <<endl;
    }
    return 0;
}