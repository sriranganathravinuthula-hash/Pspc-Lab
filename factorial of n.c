#include<stdio.h>
int main()
{   
    int n,factorial=1;
    printf("enter a number n");
    scanf("%d",&n);
	
	int i;
    for( i=1;i<=n;i++){
	factorial=factorial*i;
	}
	   printf("factorial=%d",factorial);
	return 0; 
}
