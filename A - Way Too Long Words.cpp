#include<stdio.h>
#include<string.h>
#include <iostream>
int main()
{
    int a,i,x,j;
    char ch[1000];
    scanf("%d", &a);
    for(i=0;i<=a;i++)
    {
        gets(ch);
        x=strlen(ch);
        if(x<=10)
        {
            for(j=0;j<x;j++)
                printf("%c", ch[j]);
        }
        else if(x>10)
        {
            printf("%c%d%c",ch[0],x-2,ch[x-1]);
        }
                printf("\n");
    }
    return 0;
}