#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,res=0;
        int i;
        cin>>x>>y>>a>>b;

        for(i=0;i<min(x,y);i++)
            res+=b;
        for(i=0;i<(max(x,y)-min(x,y));i++)
            res+=a;
        long long int result=min((y+x)*a,res);
        cout<<result<<endl;
    }
    return 0;
}
