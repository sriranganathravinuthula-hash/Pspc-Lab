#include<stdio.h>
int fact(int *p){
	if(*p==1){
		return 1;
	}
	else {
		return *p*fact(p-1);
	}
}
int main()
{
	int n;
	int *p;
	p=&n;
	printf("enter the n value \n");
	scanf("%d",&n);
	fact(&n);
	printf("factorial of n is %d \n",fact(&n));
	return 0;
}
