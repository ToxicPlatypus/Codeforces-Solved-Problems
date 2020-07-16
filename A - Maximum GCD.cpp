#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        if(n%2!=0)
            n--;
        n/=2;
        cout<<n<<endl;

    }
    return 0;
}
