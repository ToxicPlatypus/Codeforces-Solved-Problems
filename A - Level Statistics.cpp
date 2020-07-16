#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,i;
        cin>>t;
        int x=0,y=0,res=0;
        int xx,yy;
        for(i=0;i<t;i++)
        {
            cin>>xx>>yy;

            if(xx<x || yy<y || xx-x < yy-y)
                res=1;

            x=xx;y=yy;
        }
        if(res==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
