#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int q;
    cin>>q;
    int tq[q];
    for(int i=0; i<q; i++)
        cin>>tq[i];
    for(int i=0; i<q; i++)
    {
        cout<<upper_bound(ar,ar+n,tq[i])-ar<<endl;
    }
    return 0;
}