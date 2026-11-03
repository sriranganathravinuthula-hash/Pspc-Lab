int fac(int n)
{
	int fact=1,i;
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}

#include <stdio.h>
int main()
{
	int n;
	printf("enter the n value:\n");
	scanf("%d",&n);
	printf("factorial of %d is %d\n",n,fac(n));
	return 0;
}
