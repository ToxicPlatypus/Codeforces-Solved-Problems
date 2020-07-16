#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n,count=0,x=1;
        cin>>n;
        vector <ll> v;
        while(n>0)
        {
            if(n%10>0)
                v.push_back((n%10)*x);
                x*=10;
                n/=10;
        }
            cout<<v.size()<<endl;
            for(auto it: v)
                cout<<it<<" ";
            cout<<endl;
    }
    return 0;
}
