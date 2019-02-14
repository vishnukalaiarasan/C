#include <stdio.h>

int main()
{
    int num,pow,i,sum=1;
    scanf("%d%d",&num,&pow);
    for(i=0;i<pow;i++)
    {
        sum=sum*num;
    }
    printf("%d",sum);
    return 0;
}
