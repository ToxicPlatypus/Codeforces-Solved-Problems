#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        int n,i,j,k,res=-1,x,key;
        cin>>n;

        int arr[n], arr2[n];

        for(i=0; i<n; i++)
            cin>>arr[i];

        sort(arr, arr+n);

        for(k=1; k<=1024; k++)
        {
            for(i=0; i<n; i++)
                arr2[i]=k^arr[i];

            sort(arr2, arr2+n);
            key=1;
            for(i=0; i<n; i++)
            {
                if(arr[i] != arr2[i])
                {
                    key=0;
                    break;
                }
            }
            if(key)
            {
                res=k;
                break;
            }
        }

        cout<<res<<endl;
    }

    return 0;
}
