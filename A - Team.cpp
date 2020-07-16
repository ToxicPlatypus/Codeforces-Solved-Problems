#include<stdio.h>
 
 
int main()
{
    int a,b,c,t,i,sum=0;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        if(a==1 && b==1)
            sum++;
        else if(a==1 && c==1)
            sum++;
        else if(c==1 && b==1)
            sum++;
        else if(c==1 && b==1 && a==1)
            sum++;
    }
    printf("%d\n", sum);
    return 0;
 
}