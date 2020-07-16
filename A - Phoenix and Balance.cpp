
#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll num,i;
        cin>>num;
        ll sum1=0,sum2=0;

        for(i=1;i<num/2;i++)
            sum1+=pow(2,i);
            sum1+=pow(2,num);

        for(i=num/2;i<=num-1;i++)
            sum2+=pow(2,i);

        cout<<abs(sum1-sum2)<<endl;




    }
    return 0;
}
