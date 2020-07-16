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

        if(x>y)
            swap(x,y);

        if(x==y)
            cout<<0<<endl;

        else
        {
            int c=0;
            while(x<y)
            {
                if(x*8<=y)
                {
                    x=x*8;
                    c++;
                }
                else if(x*4<=y)
                {
                    x=x*4;
                    c++;
                }
                else
                {
                    x=x*2;
                    c++;
                }
            }
            if(x==y)
                cout<<c<<endl;
            else
                cout<<"-1"<<endl;
        }
    }

    return 0;
}
