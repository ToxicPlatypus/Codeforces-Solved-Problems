#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n,i,sub,req=1,temp,co=0,pri=0,res=2;
        cin>>n;
        while(n>1)
        {
            co=0;
            for(i=1; ;i++)
            {
            req=((i+1)*3*i)/2-i;
            if(n<req)
                break;
            co++;
            }
            n-=(((co+1)*3*co)/2-co);
            pri++;
        }
        cout<<pri<<endl;
    }
    return 0;
}
