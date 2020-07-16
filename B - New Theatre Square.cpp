#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        int i,j;
        char ch[n][m];

        int single=0,couple=0;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin >> ch[i][j];
                if(ch[i][j]=='.')
                    single++;
            }
        }

        i=0;
        while(i<n )
        {
            for(int j=0;j<m-1;j++){
                if(ch[i][j]=='.' && ch[i][j+1]=='.')
                {
                    j++;
                    couple++;
                }
                }
                i++;
        }

        int res1 = single*x;
        int res2 = couple*y + (single-(couple*2))*x;

        cout<<min(res1,res2)<<endl;

    }
    return 0;
}
