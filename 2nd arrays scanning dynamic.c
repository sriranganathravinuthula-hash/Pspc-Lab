#include<stdio.h>
int main()
{
	int r1,c1,i,j;
	printf("enter the values of r1 and c1\n");
	scanf("%d%d",&r1,&c1);
    int arr[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&arr[i][j]);
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}
	return 0;
}
