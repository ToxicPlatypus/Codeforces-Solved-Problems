#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,x,i,ans;
        cin>>n>>x;
        ll arr[n],sum=0,count=0,c2=0;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];

            if(arr[i]%x == 0)
                count++;
        }

        if(sum%x!=0)
            ans=n;
        else if(count==n)
            ans=-1;
        else
        {
            ll left=0,right=0;

            for(i=0; i<n; i++)
            {
                left++;
                if(arr[i]%x!=0)
                    break;
            }
            for(i=n-1; i>=0; i--)
            {
                right++;
                if(arr[i]%x!=0)
                    break;
            }
            ans=max(n-left,n-right);
        }
        cout<<ans<<endl;
    }
    return 0;
}
