#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,m,x,i,a,b;
        cin>>n>>x>>m;

        ll bam=x, dan=x;

        for(i=0; i<m; i++)
        {
            cin>>a>>b;

            if(a<=bam && b>=dan)
            {
                bam=a;dan=b;
            }
            if(a<bam && b>=bam)
                bam=a;
            if(b>dan && a<=dan)
                dan=b;
        }

        cout<<dan-bam+1<<endl;
    }
    return 0;
}
