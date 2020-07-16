#define ll long long
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,b,n,x,i=1,j=1,y,sum;
        cin>>a>>b>>n;
        x=max(a,b);
        y=min(a,b);
        sum=x+y;
 
        while(sum<n+1)
        {
            i++;
            if(x>y)
                y=y+x;
            else
                x=x+y;
            sum=x+y;
        }
        cout<<i<<endl;
    }
    return 0;
}
