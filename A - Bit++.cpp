#include<stdio.h>
 #include<string.h>
 
int main()
 {
 int i,n,c=0;
 scanf("%d\n",&n);
 char p[150];
 
for (i=0; i<n; i++)
 {
 gets(p);
 if ( (p[0]=='-'&&p[1]=='-') || (p[1]=='-'&&p[2]=='-')) c--;
 if ( (p[0]=='+'&&p[1]=='+') || (p[1]=='+'&&p[2]=='+')) c++;
 
}
 printf("%d\n",c);
 
return 0;
 }