#include <stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the value of celsius\n");
	scanf("%f",&celsius);
	fahrenheit=((9.0/5.0)*celsius)+32;
	printf("fahrenheit=%f\n",fahrenheit);
	return 0;
}
