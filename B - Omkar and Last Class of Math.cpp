#define ll long long
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin >> n;
 
        if(n % 2 == 0)
            cout << n/2 << " " << n/2 << endl;
 
        else
        {
            ll x = 0, i;
            for(i=2; i*i<=n; i++)
            {
                if(n % i == 0)
                {
                    x = i;
                    break;
                }
            }
            if(x == 0)
                cout << '1' << " " << n-1 <<endl;
            else
                cout << n/x << " " << n-n/x << endl;
        }
    }
    return 0;
}