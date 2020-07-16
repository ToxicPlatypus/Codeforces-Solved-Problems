#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int x;
        int n,m,i;
        cin>>x>>n>>m;
        m=m*10;
        if(x>m)
        {
            for(i=0;i<n;i++)
                x=x/2+10;
            x=x-m;
        }
        else
        {
            x=x-m;
        }
        if(x>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
