#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,temp,sum=0;
clrscr();
scanf("%d",&n);
m=n;
if(n<=1000)
{
while(n!=0)
{
temp=n%10;
sum=sum*10+temp;
n=n/10;
}
}
if(m==sum)
{
printf("yes");
}
else
{
printf("no");
} 
getch();
}
