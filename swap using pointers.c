#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping 1st=%d and 2nd=%d\n",*a,*b);
}
int main()
{
	int x,y;
	int *p,*q;
	p=&x;
	q=&y;
	printf("enter two values to swap\n");
	scanf("%d%d",&x,&y);
	printf("before swapping 1st =%d and 2nd =%d\n",x,y);
	swap(&x,&y);
	return 0;
}
