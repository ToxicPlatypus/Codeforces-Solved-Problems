#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t,i;
    while(n--)
    {
        cin>>t;
        int arr[t],farr[t];
        for(i=0;i<t;i++)
            cin>>arr[i];
        sort(arr,arr+t);
        int co=0,y=0,m=t-1;
        for(i=t-1;i>=0;i--)
        {
            if(co%2!=0)
            {
                farr[i]=arr[m];
                m--;
            }
            else
            {
               farr[i]=arr[y];
                y++;
            }
            co++;
        }
        for(i=0;i<t;i++)
            cout<<farr[i]<<" ";
            cout<<endl;
    }
}
