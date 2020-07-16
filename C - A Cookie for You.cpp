#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll vanilla, chocolate, n, m;
        cin >> vanilla >> chocolate >> n >> m;

        if ((n + m > vanilla + chocolate) ||
            min(vanilla,chocolate) < m)
                cout << "No" << endl;

            else
                cout << "Yes" << endl;
    }
    return 0;
}
