#define ll long long
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,i,odd=0,even=0;
        cin>>n;
        ll arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        for(i=0; i<n; i+=2)
        {
            if(arr[i]%2!=0)
                odd++;
        }
        for(i=1; i<n; i+=2)
        {
            if(arr[i]%2==0)
                even++;
        }
 
        if(odd==even)
            cout<<odd<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
