#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
        string s = "codeforces";
        int i;
        int arr[10];
        for(i=0; i<10; i++)
            arr[i]=1;

        ll n,count=1;
        cin>>n;
        i=0;
        while(count<n)
        {
            count/=arr[i];
            arr[i]++;
            count*=arr[i];
            i++;
            i%=10;
        }

        for(i=0; i<10; i++)
            while(arr[i]--)
                cout<<s[i];

        return 0;
}
