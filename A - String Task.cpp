#include<stdio.h>
#include<string.h>
 
int main()
{
    char ch[100];
    int i,a,b;
    gets(ch);
    strlwr(ch);
    a=strlen(ch);
    for(i=0;i<a;i++)
    {
        if(ch[i]=='a' || ch[i]=='o' || ch[i]=='y' || ch[i]=='e' || ch[i]=='u'|| ch[i]=='i')
            printf("");
        else
            printf(".%c", ch[i]);
    }
    return 0;
 
}