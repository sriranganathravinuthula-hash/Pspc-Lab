#include<stdio.h>
int main()
{
	int a[10],n,i,max;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=a;
	max=*p;
	for(i=0;i<n;i++) {
		if(*(p+i)>max)
		max=*(p+i);
	}
	printf("maximum=%d",max);
	return 0;
}
