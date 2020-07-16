#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,i,zero=0,one=0,sorted=0;
        cin>>n;
        ll arr1[n],arr2[n];
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr2[i];
            if(arr2[i]==0)
                zero=1;
            else
                one=1;
        }
        for(i=0; i<n-1; i++)
        {
            if(arr1[i]>arr1[i+1])
                sorted=1;
        }

        if(sorted==0)
            cout<<"Yes"<<endl;
        else if(zero==1 && one==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
