#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll x,sum;
        cin>>x;
        sum=x;
        while(x>=10)
        {
            sum+= x/10;
            x=x/10+x%10;
        }
        cout<<sum<<endl;
    }

    return 0;
}
