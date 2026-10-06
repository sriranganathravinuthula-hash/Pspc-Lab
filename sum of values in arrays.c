#include<stdio.h>
int main()
{
	int a[100],sum=0,i,n;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		printf("a[%d]=%d\n",i,a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	return 0;
}
