#include<stdio.h>
int main()
{
    int a[10],max=0,min=3200,smax=0;
    printf("enter 10 elemnts =");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
        for(int i=0;i<10;i++)
        {
            if((a[i]>min&&a[i]<max)&&a[i]>smax)
            smax=a[i];
        }
    printf("\n second maximun number in the array is %d",smax);
    return 0;
}

