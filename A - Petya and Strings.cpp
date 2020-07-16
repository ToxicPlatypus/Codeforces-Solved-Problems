#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],d[100];
    int x;
    scanf("%s%s",&c, &d);
    strlwr(c);strlwr(d);
    x=strcasecmp(c,d);
    printf("%d\n", x);
    return 0;
}