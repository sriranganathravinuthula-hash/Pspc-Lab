
#include<stdio.h>
int main()
{
	int i,j,r1,c1,zeroes=0,nonzeroes=0;
	printf("enter the no of rows and coloumns\n");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	for(i=0;i<r1;i++) {
		for(j=0;j<c1;j++) {
			scanf("%d",&a[i][j]);
			printf("%d\n",a[i][j]);
			if (a[i][j]==0) {
				zeroes++;
			}
			else {
				nonzeroes++;
			}
		}
		
		printf("\n");
	}	
if (zeroes>nonzeroes) {
	printf("the given matrix is a sparse matrix\n");
	
}
else {
	printf("the given matrix is not a sparse matrix\n");
}
return 0;
}
