#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll cards, joker, player;
        cin>>cards>>joker>>player;

        ll n,m;

        n=cards/player;
        m=joker-n;

        if(n>joker)
            cout<<joker<<endl;
        else if(m%(player-1)!=0)
        {
            cout<<n-(m/(player-1)+1)<<endl;
        }
        else
            cout<<n-(m/(player-1))<<endl;
    }
    return 0;
}
