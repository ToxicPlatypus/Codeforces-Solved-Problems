
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,i,pin=97,co=1;
        cin>>n>>a>>b;
        int arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=pin;
            if(co==b)
            {
                pin=97;co=1;
            }
            else
            {
                co++;pin++;
            }
        }
        for(i=0;i<n;i++)
            cout<<(char)arr[i];
        cout<<endl;

    }
    return 0;
}
