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

        ll a[x],b[x],i,sum=0;

        for(i=0; i<x; i++)
            cin>>a[i];
        for(i=0; i<x; i++)
            cin>>b[i];

        sort(a,a+x);
        sort(b,b+x,greater<int>());

        for(i=0;i<y;i++)
        {
            if(a[i]<b[i])
                a[i]=b[i];
        }

        for(i=0; i<x; i++)
            sum+=a[i];
        cout<<sum<<endl;

    }
    return 0;
}
