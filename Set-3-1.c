#include <stdio.h>
int main()
{
	int a,n,d,s;
	scanf("%d%d%d",&n,&a,&d);
	s=(n*(2*a+(n-1)*d))/2;
	printf("sum is %d",s);
	return 0;
}
