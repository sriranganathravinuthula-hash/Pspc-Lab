#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
	} while(n%2==1);
	  printf("end\n");
	return 0;
	
}
