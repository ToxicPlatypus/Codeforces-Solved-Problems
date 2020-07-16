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
        cin >> n;

        string arr;
        cin>>arr;

        ll f1=n, f2=0;

        for(i=0; i<n; i++)
        {
            if(arr[i]=='1')
            {
                f1=i;
                break;
            }
        }
        for(i=f1; i<n; i++)
        {
            if(arr[i]=='0')
            {
                f2=i;
            }
        }
        if(f1>f2)
        {
            for(i=0; i<n; i++)
                cout<<arr[i];
        }
        else
        {
            for(i=0; i<f1; i++)
                cout<<arr[i];
            for(i=f2; i<n; i++)
                cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}
