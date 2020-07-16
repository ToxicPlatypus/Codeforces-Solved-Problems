#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,m,i,even=2,odd=1,sum=0,sum2=0;
        cin>>n;
        m=n/2;
        if(m%2!=0)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(i=0;i<m;i++)
            {
                cout<<even<<" ";
                sum+=even;
                even+=2;
            }
            for(i=1;i<m;i++)
            {
                cout<<odd<<" ";
                sum2+=odd;
                odd+=2;
            }
            cout<<sum-sum2<<endl;
 
        }
    }
    return 0;
}