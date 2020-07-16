#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll x;
        cin>>x;
        x=floor(x/2);
        ll a=3,b=1,sum=0,i;
        for(i=1;i<=x;i++)
        {
            sum+=i*(a*2+b*2);
            a+=2;b+=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
