#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,a1,a2,c1,c2;
        cin>>n;
        cin>>a>>b>>c>>d;
        a1=a+b;a2=a-b;
        c1=c+d;c2=c-d;
        if((a1*n<c2)||(a2*n>c1))
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
