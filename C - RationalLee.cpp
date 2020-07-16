#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n, k, i, sum=0, x, y, ma, mi;
        cin>>n;
        cin>>k;

        x = n-1; y = n-k-1;
        ma = 0;

        ll arr[n], a2[k];

        for(i=0; i<n; i++)
            cin >> arr[i];
        for(i=0; i<k; i++)
            cin >> a2[i];

        sort(arr, arr+n);
        sort(a2, a2+k);

        for(i=0; i<k; i++)
        {
            if(a2[i] == 1)
            {
                ma = mi = arr[x];
                x--;
            }
            else
            {
                ma = arr[x];
                mi = arr[y-a2[i]+2];
                x--;
                y=y-a2[i]+1;
            }
            sum += ma + mi;
        }

        cout << sum << endl;

    }
    return 0;
}
