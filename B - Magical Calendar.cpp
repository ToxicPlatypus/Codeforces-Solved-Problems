#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a, b, i,sum =0;
        cin >> a >> b;
        ll ans = (b * (b + 1)) / 2;
        ll ans1 = (a * (a - 1))/2;
        if (a > b)
        {
            cout << ans << endl;
        }

        else
        {
            cout << ans1 + 1 <<endl;
        }

    }
    return 0;
}
