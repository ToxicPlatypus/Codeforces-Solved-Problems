#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll x,y;
        cin>>x>>y;

        ll res=x*y;
        ll ans=res/2;

        if(res%2==0)
            cout<<ans<<endl;
        else
            cout<<ans+1<<endl;


    }
    return 0;
}

