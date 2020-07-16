#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,flag=0;
        cin>>n;
        long long int arr[n],result,temp;
        for(i=0;i<n;i++)
            cin>>arr[i];
        result=arr[0];
        temp=arr[0];
        if(arr[0]>0)
            flag=1;

        for(i=1;i<n;i++)
        {
            if(flag==0 && arr[i]<0)
            {
                if(arr[i]>temp){
                    result-=temp;
                    result+=arr[i];
                    temp=arr[i];
                }
            }
            else if(flag==1 && arr[i]>0)
            {
                if(arr[i]>temp){
                    result-=temp;
                    result+=arr[i];
                    temp=arr[i];
                }
            }
            else if(flag==0 && arr[i]>0)
            {
                result+=arr[i];flag=1;temp=arr[i];
            }
            else if(flag==1 && arr[i]<0)
            {
                result+=arr[i];flag=0;temp=arr[i];
            }
        }
        cout<<result<<endl;

    }
    return 0;
}
