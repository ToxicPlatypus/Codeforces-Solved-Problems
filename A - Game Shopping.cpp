#include<stdio.h>
 
int main()
{
    int n,m,game[1001],bill[1001],i,j,count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d", &game[i]);
    for(i=0;i<m;i++)
        scanf("%d", &bill[i]);
        i=0;
        for(j=0;j<n;j++)
        {
            if(bill[i]>=game[j])
               {
                   count++;
                    i++;
               }
        }
    printf("%d\n",count);
    return 0;
}