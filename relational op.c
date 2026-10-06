#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b to perform relational op\n");
	scanf("%d%d",&a,&b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d>=%d=%d\n",a,b,a>=b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	printf("Note:the result of above if \'1\' it is true and \'0\' it is false");
	return 0;
	
}
