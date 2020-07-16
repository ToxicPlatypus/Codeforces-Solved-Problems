#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,x=3,i;
        cin>>a;
        while(a%x!=0)
        {
            x=x*2+1;
        }
        cout<<a/x<<endl;
    }
    return 0;
}