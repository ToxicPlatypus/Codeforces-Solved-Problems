#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a=x+y+z;
    int b=x+y*z;
    int c=x*y+z;
    int d=x*y*z;
    int e=(x+y)*z;
    int f=x*(y+z);

    int arr[6]={a,b,c,d,e,f};

    cout<<*max_element(arr,arr+6)<<endl;

    return 0;
}
