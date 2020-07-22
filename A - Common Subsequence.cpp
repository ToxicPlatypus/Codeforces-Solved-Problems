#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll a, b, i, j;
        bool aa = false;
        cin >> a >> b;
        ll arr1[1002] = {0}, arr2[1002] = {0};

        for(i=0; i<a; i++)
        {
            cin >> j;
            arr1[j]++;
        }

        for(i=0; i<b; i++)
        {
            cin >> j;
            arr2[j]++;
        }

        for(i=0; i<1001; i++)
        {
            if(arr1[i] != 0 && arr2[i] != 0)
            {
                cout<< "YES" <<endl;
                cout << "1" <<" "<< i <<endl;
                aa = true;
                break;
            }
        }
        if(!aa)
            cout <<"NO"<<endl;
    }
    return 0;
}
