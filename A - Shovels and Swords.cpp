#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,b;
        cin>>a>>b;

        if(a==0 || b==0)
            cout<<"0"<<endl;
        else if((a>=2*b)||(b>=2*a))
            cout<<min(a,b)<<endl;
        else
        {
            cout<<(a+b)/3<<endl;
        }
    }
    return 0;
}
