#include<stdio.h>
#include<string.h>
#include <iostream>
int main()
{
    int a,i,x;
    char ch[1000];
    gets(ch);
    x=strlen(ch);
    ch[0]=toupper(ch[0]);
    for(i=0;i<x;i++)
    {
        printf("%c", ch[i]);
    }
    printf("\n");
    return 0;
}