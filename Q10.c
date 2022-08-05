#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("enter 10 elemnts =");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
        printf("\n\n");

    for(int i=0;i<10;i++)
        b[i]=a[i];

    for(int i=0;i<10;i++)
        printf("%d\t",b[i]);
    return 0;
}
