#include<stdio.h>
int main()
{
		int a[100],i,n,key,*p;
		p=a;
		printf("enter the size of the array\n");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
		printf("enter element to search\n");
		scanf("%d",&key);
		for(i=0;i<n;i++){
			if(*(p+i)==key){
				printf("element found at %d\n",i+1);
				break;
			}
			
			}
		
		return 0;
}
