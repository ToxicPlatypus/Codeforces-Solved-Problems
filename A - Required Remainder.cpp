#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll ans = ((n / a) * a) + b;
        if(ans <= n)
            cout << ans << endl;
        else
            cout << ans - a <<endl;
    }
    return 0;
}
