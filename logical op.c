#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("(%d>%d)&&(%d>%d)=%d\n",a,b,a,c,(a>b)&&(a>c));
	printf("(%d>%d)||(%d>%d)=%d\n",a,b,a,c,(a>b)||(a>c));
	printf("!(%d=%d)=%d\n",a,b,!(a>b));
	printf("Note:the result of above if \'1\' it is true and \'0\' it is false\n");
	return 0;
}
