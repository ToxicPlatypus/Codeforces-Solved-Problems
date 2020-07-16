#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,k;
        cin >> a >> k;
        ll temp,i;
        for(i=1;i<k;i++)
        {
            ll ma=0,mi=10;
            temp=a;
            while(temp)
            {
                if(temp%10 > ma)
                    ma=temp%10;
                if(temp%10 < mi)
                    mi=temp%10;
                temp /= 10;
            }
            a=a+ma*mi;
            if(mi==0)
                break;
        }
        cout<<a<<endl;

    }
    return 0;
}
