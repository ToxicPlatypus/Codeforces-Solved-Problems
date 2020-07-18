#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);

        if(a[1] == a[2])
            cout << "YES" <<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}

