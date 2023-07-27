#include <bits/stdc++.h>
using namespace std;
int mx = 10e2;
#define loop for(int i = 0 ; ; i++)

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        int n;
        long long b;
        cin >> n >> b;
        long long area = 0;
        for(int i = 1; i<=n; i++)
        {
            long long price, width, height;
            cin >> width >> height >> price;
            if(price <= b)
            {
                int temp = width*height;
                if(temp>area)
                {
                    area = temp;
                }
            }
            
        }
        
        if(area == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << area << endl;
        }
    }
    return 0;
}