#include<stdio.h>
int main()
{
    int a[10],max=0,min=3200,smin=3200;
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
            if(a[i]<max&&a[i]>min&&a[i]<smin)
                smin=a[i];
        }
    printf("\n second minimum number in the array is %d",smin);
    return 0;
}


