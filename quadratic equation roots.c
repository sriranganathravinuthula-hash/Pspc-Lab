#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,dis,x1,x2;
	printf("enter the value of a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	dis=((b*b)-(4*a*c));
	x1=(-b+(sqrt(dis)))/(2*a);
	x2=(-b-(sqrt(dis)))/(2*a);
	if(dis>0){
	printf("roots are %f and %f",x1,x2);
	printf("dis=%f\n",dis);
	}
	else if(dis==0){
    printf("roots are equal and root=%f",x1);
    printf("dis=%f\n",dis);
    }
	else {
	printf("no real roots\n");
	printf("dis=%f\n",dis);
}
	return 0;
}
