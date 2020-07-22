#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n, i, res=0, one, x;
        cin >> n;
        one = n;
        ll arr[n];
        for(i=1; i<=n; i++)
            cin >> arr[i];

        for(i=1; i<=n; i++)
        {
            if(arr[i]>1)
            {
                one = i;
                break;
            }
        }

        if(one==n)
        {
            if(n%2==0)
                cout << "Second" <<endl;
            else
                cout<< "First" <<endl;
        }

        else
        {
            if(one%2!=0)
                cout << "First" <<endl;

            else
                cout << "Second" <<endl;
        }
    }
    return 0;
}
