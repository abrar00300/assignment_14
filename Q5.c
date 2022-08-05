#include<stdio.h>
int main()
{
    int a[10],min=32000;
    printf("enter 10 elemnts =");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\n smallest number in the array is %d",min);
    return 0;
}

