#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        int row,col,i,j,count=0,key=0;
        int rowfaka=0, colfaka=0;
        cin>>row>>col;
        int arr[row][col];

        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                cin>>arr[i][j];

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(arr[i][j]==1)
                    key=1;
            }
            if(key==0)
                rowfaka++;
            key=0;
        }
        for(i=0;i<col;i++)
        {
            key=0;
            for(j=0;j<row;j++)
            {
                if(arr[j][i]==1)
                    key=1;
            }
            if(key==0)
                colfaka++;
        }

        int res=min(rowfaka,colfaka);

        if(res%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;
    }
    return 0;
}
