
#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,i;
        cin>>n;
        ll arr[n],ans=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        for(i=0;i<n;i++)
        {
            if(arr[i]<=i+1)
                ans=i+1;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
