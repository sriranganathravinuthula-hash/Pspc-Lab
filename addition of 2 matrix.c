#include<stdio.h>
int main()
{
	int r1,r2,r3,c1,c2,c3,i,j;
	printf("enter the value of row and coloumn of matrix a\n");
	scanf("%d%d",&r1,&c1);
    int	a[r1][c1];
    for(i=0;i<r1;i++){
    	for(j=0;j<c1;j++){
    		scanf("%d",&a[i][j]);
    		printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}
	printf("enter the value of row and coloumn of matrix b\n");
	scanf("%d%d",&r2,&c2);
    int	b[r2][c2];
    for(i=0;i<r2;i++){
    	for(j=0;j<c2;j++){
    		scanf("%d",&b[i][j]);
    		printf("b[%d][%d]=%d\n",i,j,b[i][j]);
			}
}

if ((r1==r2)&&(c1==c2)) {
printf("addition of matrix is posible\n");
r3=r1;
c3=c1;
    int	c[r3][c3];
    for(i=0;i<r3;i++){
    	for(j=0;j<c3;j++){
    		c[i][j]=a[i][j]+b[i][j];
    		printf("c[%d][%d]=%d\n",i,j,c[i][j]);
    	}
   }
} else {
	printf("addition is not possible for given order of matrix\n");
}
return 0;
}

