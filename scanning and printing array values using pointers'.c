#include<stdio.h>
int main()
{
	int a[10],n,i,*p;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("array values:\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));	
	}
	return 0;
}
