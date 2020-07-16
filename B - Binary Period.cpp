#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,x=0,y=0,res;
        for(i=0;i<s.length();i++){
            if(s[i]=='0')
                x++;
            else
                y++;
        }
        if(x==0 || y==0)
        {
            cout<<s<<endl;
        }
        else
        {
            for(i=0;i<s.length();i++)
                cout<<"01";
                cout<<endl;
        }
    }
    return 0;
}
