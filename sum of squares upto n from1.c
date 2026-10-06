#include<stdio.h>
int main()
{
	int n,i,square,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	square=i*i;sum=sum+square;
	}
	printf("sum=%d",sum);
	return 0;
}


