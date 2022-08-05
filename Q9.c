#include<stdio.h>
int main()
{
    int a[10],n;
    printf("enter 10 elemnts =");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\nenter value for n=");
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--)
            printf("%d\t",a[i]);
    return 0;
}
