#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2;
	printf("enter the value of r1 and c1\n");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
		scanf("%d",&a[i][j]);
		printf("a[%d][%d]=%d\n",i,j,a[i][j]);
	}
}
r2=c1;
c2=r1;
int b[r2][c2];
for(i=0;i<r2;i++){
	for(j=0;j<c2;j++){
	b[j][i]=a[i][j];
}
}
printf("transpose matrix of a is\n");
for(i=0;i<r2;i++){
	for(j=0;j<c2;j++){
		printf("b[%d][%d]=%d\n",i,j,b[i][j]);
	}
}
return 0;
}
