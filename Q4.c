#include<stdio.h>
int main()
{
    int a[10],max=0;
    printf("enter 10 elemnts =");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\n greatest number in the array is %d",max);
    return 0;
}
