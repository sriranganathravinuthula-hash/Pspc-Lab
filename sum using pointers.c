#include <stdio.h>
int main()
{
	int a,b,sum;
	int *p,*q;
	printf("enter two values:\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum= %d",sum);
	return 0;
}
