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
        cin >> n;

        if(n % 2 == 0)
            cout << n / 2 <<endl;
        else
            cout << n / 2 + 1 <<endl;


    }
    return 0;
}
