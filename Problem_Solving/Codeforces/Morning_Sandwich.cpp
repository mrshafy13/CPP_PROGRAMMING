#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    int mx_price = h, mx_price_pati_num = p;
    int mn_price = c, mn_price_pati_num = f;
    if(mn_price > mx_price)
    {
        mx_price = c;
        mx_price_pati_num = f;
        mn_price = h;
        mn_price_pati_num = p;
    }
    return 0;
}