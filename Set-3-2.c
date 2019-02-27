#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,max,num[50];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
max=num[0];
for(i=0;i<n;i++)
{
if(max<num[i])
{
max=num[i];
}
}
printf("%d",max);
getch();
}
