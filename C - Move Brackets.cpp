#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n, i, found=0, x=0, ans=0;
        cin >> n;
        char arr[n];
        for(i=0; i<n; i++)
            cin >> arr[i];
        for(i=0; i<n; i++)
        {
            if(arr[i] == '(')
                x++;
            else
            {
                if(x > 0)
                    x--;
                else
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
