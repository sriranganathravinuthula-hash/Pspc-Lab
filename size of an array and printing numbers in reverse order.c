#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter no of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
		printf("elements in reverse order\n");
		for(i=n-1;i>=0;i--) {
			printf("%d\n",a[i]);
		}
		return 0;
		
	}

