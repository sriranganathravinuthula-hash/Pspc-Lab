void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping 1st=%d,2nd=%d\n",a,b);
}

#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	printf("before swapping 1st=%d,2nd=%d\n",x,y);
	swap(x,y);
	return 0;
}
