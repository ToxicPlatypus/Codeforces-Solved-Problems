#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n>>x;
        int odd=0, even=0, num, i;

        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num%2!=0)
                odd++;
            else
                even++;
        }

        if(even>=x)
            x=1;
        else if(even==0)
            x=x;
        else
        {
            x=x-even;
            if(x%2==0)
                x++;
        }

        if(x%2==0 || odd<x)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
