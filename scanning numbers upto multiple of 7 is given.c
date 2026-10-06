#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value f n\n");
    do{
        scanf("%d",&n);
        printf("%d",n);
        if(n%7==0){
           printf("end");
            break;
        }
    }while(1);
        return 0;
}
