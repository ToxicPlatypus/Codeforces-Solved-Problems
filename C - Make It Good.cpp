#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll i, n, peak=0, ans=0;
        cin >> n;
        ll arr[n];

        for(i=0; i<n; i++)
            cin >> arr[i];

        for(i=n-1; i>=0; i--)
        {
            if(arr[i]>arr[i-1] && peak==0)
            {
                ans = i;
                peak = 1;
            }
            if(peak==1 && arr[i]<arr[i-1])
            {
                ans = i;
                break;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
