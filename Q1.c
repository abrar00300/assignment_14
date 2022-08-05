#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter 10 numbers =\n");
    for(i=0;i<10;i++)
            scanf("%d",&a[i]);
    int sum=0;
    for(i=0;i<10;i++)
        sum=sum+a[i];
    printf("sum of all elements of array is =%d",sum);
    return 0;
}
