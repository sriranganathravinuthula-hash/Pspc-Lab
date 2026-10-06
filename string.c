#include <stdio.h>
int main()
{
	int age;
	printf("enter the age\n");
	scanf("%d",&age);
	if(age>=18)
	printf("adult\n");
	else
	printf("minor\n");
	return 0;
}
