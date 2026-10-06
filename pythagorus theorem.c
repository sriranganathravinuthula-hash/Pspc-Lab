#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	c=sqrt(a*a+b*b);
	printf("after applying pythagoreus theorem we get c=%f\n",c);
	return 0;
}
