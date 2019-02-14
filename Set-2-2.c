#include <stdio.h>
int main()
{
    int n,m,i,sum=0,temp;
    scanf("%d",&n);
    n=m;
    if(n<=1000)
    {
    while(n!=0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/100;
    }
    }
    if(m==sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
