#define ll long long
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        ll i;
        ll len=s.length();
 
        cout<<s[0];
        for(i=1; i<len-1; i+=2)
        {
            cout<<s[i];
        }
        cout<<s[len-1]<<endl;
    }
    return 0;
}
