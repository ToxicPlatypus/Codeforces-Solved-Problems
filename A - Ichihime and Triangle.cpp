
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b,c,d,x,y,z,i,j,k;
        cin>>a>>b>>c>>d;
                for(i=b,j=c,k=c;i>=a,j>=b,k<=d;i--,j--,k++)
                    {
                        x=i;y=j;z=k;
                        if(x+y>z)
                        {
                            cout<<x<<" "<<y<<" "<<z<<endl;
                            break;
                        }
                    }
    }
    return 0;
}
