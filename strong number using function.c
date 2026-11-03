int fac(int n)
{
	int fact=1,i;
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}

#include<stdio.h>
int main()
{
	int n,rem,sum=0,temp;
	printf("enter the n value\n");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		sum=sum+fac(rem);
		n=n/10;
	}
	
	if(sum==temp){
		printf("%d = %d then %d is a strong number\n",temp,sum,temp);
	}
	else {
		printf("%d is not a strong number\n",n);
	}
	return 0;
}
