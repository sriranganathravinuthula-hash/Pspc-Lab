int fac(int n)
{
	int fact,i;
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
	 
}

#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value:\n");
	scanf("%d",&n);
	printf("factorial of %d is %d\n",n,fac(n));
	return 0;
}
