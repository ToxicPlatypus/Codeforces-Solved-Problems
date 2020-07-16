#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n,i,j;
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==m-1 && j==n-1)
                    cout<<"W";
                else
                    cout<<"B";
            }
            cout<<endl;
        }
    }

    return 0;
}
