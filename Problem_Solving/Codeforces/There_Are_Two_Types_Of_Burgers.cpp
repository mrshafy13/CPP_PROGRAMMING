#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        int b, p, f, h, c;
        cin >> b >> p >> f; 
        cin >> h >> c;

        int mx_price = h, mx_price_patties_num = p;
        int min_price = c, min_price_patties_num = f;

        if(mx_price < min_price)
        {
            mx_price = c, mx_price_patties_num = f;
            min_price = h, min_price_patties_num = p;
        }

        int burger_num = b/2;
        int ans = 0;
        if(mx_price_patties_num >= burger_num)
        {
            ans += (burger_num * mx_price);
            burger_num = 0;
        }
        else if(burger_num>mx_price_patties_num)
        {
            ans += (mx_price_patties_num * mx_price);
            burger_num = burger_num-mx_price_patties_num;
            if(burger_num>min_price_patties_num)
            {
                ans+=(min_price_patties_num * min_price);
            }
            else
            {
                ans += (burger_num*min_price);
            }
        }
        cout << ans << endl;
    }
    return 0;
}