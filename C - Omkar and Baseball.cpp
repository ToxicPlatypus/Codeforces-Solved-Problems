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
        ll arr[n], i, start = 0, end = 0, ans = 0;
        for(i=0; i<n; i++)
            cin >> arr[i];
        for(i=0; i<n; i++)
        {
            if(arr[i]!= i+1){
                start = i;
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if(arr[i] != i+1){
                end = i;
                break;
            }
        }
        if(start == 0 && end == 0)
            cout <<'0'<< endl;
        else
        {
            for(i=start; i<end; i++)
            {
                if(arr[i] == i+1)
                {
                    ans = 2;
                    break;
                }
            }
            if(ans == 0)
                cout << '1' << endl;
            else
                cout << ans << endl;
        }
 
    }
    return 0;
}