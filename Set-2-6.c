#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i,j,flag=0;
 printf("");
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
 for(j=2;j<=i/2;j++)
 {
 if(i%j==0)
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 printf(" %d",i);
 }
 flag=0;
 }
 getch();
 }
