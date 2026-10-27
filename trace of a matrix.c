#include<stdio.h>
int main()
{
	int i,j,r1,c1,sum=0;
	printf("enter the value of r1 and c1\n");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
			if(i==j){
				sum=sum+a[i][j];
			}
			}
			}
		
	printf("trace=%d",sum);
    return 0;
	}
	
	
