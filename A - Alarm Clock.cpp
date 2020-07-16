#define ll long long
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,b,c,d,co=0;
        cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<endl;
        else
        {
            if(c<=d)
            cout<<"-1"<<endl;
            else
            {
                ll x=a-b,y=c-d,rem;
                if(x%y==0)
                    rem=x/y;
                else
                    rem=x/y+1;
                cout<<b+rem*c<<endl;
 
            }
        }
 
    }
    return 0;
}
