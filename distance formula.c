#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,a,b,d;
	printf("enter the value of x1,y1,x2,y2\n");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	a=pow(x1-x2,2);
	b=pow(y1-y2,2);
	d=sqrt(a+b);
	printf("d=%f\n",d);
	return 0;
	
}
