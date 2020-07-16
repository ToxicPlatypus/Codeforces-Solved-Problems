
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    long long int x,y;
    while(testCase--)
    {
        cin>>x>>y;
        long long int d=x-y;
        if(d==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
