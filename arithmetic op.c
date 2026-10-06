#include <stdio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)a/b;
	printf("add=%d\nsub=%d\nmul=%d\nmod=%d\ndiv=%f\n",add,sub,mul,mod,div);
	return 0;
}
