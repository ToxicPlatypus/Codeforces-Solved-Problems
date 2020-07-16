#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll x,y;
        cin>>x>>y;

        if(x<y)
            cout<<"NO"<<endl;
        else if((x-y+1)%2==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<y-1;i++)
                cout<<"1"<<" ";
                cout<<x-y+1<<endl;
        }
        else if((x-2*(y-1))%2==0 && x-2*(y-1)>0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<y-1;i++)
                cout<<"2"<<" ";
                cout<<x-2*(y-1)<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
