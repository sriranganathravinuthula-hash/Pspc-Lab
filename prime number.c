#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i!=0){
		} break;
	}
	printf("%d is a prime number,n\n");
	return 0;
}
