#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
       int n,x,a,b;
       cin>>n>>x>>a>>b;

       int ans=abs(a-b)+x;

       if(ans>=n)
            cout<<n-1<<endl;
       else
            cout<<ans<<endl;
    }
    return 0;
}
