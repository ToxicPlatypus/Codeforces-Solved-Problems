#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin >> n;
        int arr[2*n], f[n+4]={0};
        for(int i=0; i<2*n; i++)
            cin >> arr[i];

        for(int i=0; i<2*n; i++)
        {
            if(f[arr[i]]==0)
            {
                cout << arr[i] << " ";
                f[arr[i]]++;
            }
        }
        cout << endl;
    }
    return 0;
}
