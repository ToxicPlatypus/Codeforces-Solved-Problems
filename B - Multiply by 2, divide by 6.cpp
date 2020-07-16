#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n, i, ans=0;
        cin >> n;

        while(n > 1)
        {
            if(n % 6 == 0)
            {
                ans++;
                n/=6;
            }
            else
            {
                ans++;
                n*=2;
            }
        }

        if(n == 1)
            cout << ans << endl;
        else
            cout << "-1" <<endl;

    }
    return 0;
}
