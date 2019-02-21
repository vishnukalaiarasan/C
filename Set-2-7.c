#include<stdio.h>
int main()
{
int n,a,b,c,d;
printf("Enter the number : ");
scanf("\n %d",&n);
a=n%10;
b=(n/10)%10;
c=n/100;
d=(a*a*a)+(b*b*b)+(c*c*c);
if(n==d)
printf("\nyes");
else
printf("\nno");
getch();
return 0;
}
