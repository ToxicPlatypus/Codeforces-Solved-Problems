#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    char arr[x];
 
    for(int i=0;i<x;i++)
        cin>>arr[i];
    char a=arr[0];
    int co=0;
    for(int i=1;i<x;i++)
    {
        if(a==arr[i])
        {
            co++;
        }
        else
            a=arr[i];
    }
        cout<<co<<endl;
    return 0;
}