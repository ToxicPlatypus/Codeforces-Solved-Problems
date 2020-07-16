#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,i,odd=0,even=0;
        cin>>x;
        for(i=0;i<x;i++)
        {
            cin>>y;
            if(y%2==0)
                even++;
            else
                odd++;
        }
        if(odd!=0 && even!=0 || even==0 && odd%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
