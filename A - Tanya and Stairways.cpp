#include<stdio.h>
 
int main()
{
    int num[1001],t,i,coun=1,p[1000],j=0;
    while(scanf("%d", &t)!=EOF)
    {
    for(i=0; i<t; i++){
        scanf("%d",&num[i]);
        if(num[i]==1 && i!=0)
        {
            coun++;
            p[j]=num[i-1];
            j++;
        }
    }
    printf("%d\n", coun);
    for(i=0;i<j;i++)
        printf("%d ", p[i]);
    printf("%d\n", num[t-1]);
    }
    return 0;
}