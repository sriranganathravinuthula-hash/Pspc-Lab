#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter the value of fahrenheit scale\n");
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*(5.0))/9.0;
	printf("celsius=%f",celsius);
	return 0;
}
