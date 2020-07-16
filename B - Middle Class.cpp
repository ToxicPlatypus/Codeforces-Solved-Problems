#include<bits/stdc++.h>
using namespace std;

int main()

{
    long int t;
    cin>>t;
    long long int n,x;
    while(t--)
    {
        cin>>n>>x;
        long long int arr[n+1],sum=0,co=0;
        long long int i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(i=0;i<n;i++)
        {
            if(arr[i]>=x)
            {
                co++;
                sum=sum+(arr[i]-x);
            }
            else
            {
                sum=sum-(x-arr[i]);
                if(sum>=0)
                    co++;
                else
                    break;
            }
        }
        cout<<co<<endl;
    }
    return 0;
}
