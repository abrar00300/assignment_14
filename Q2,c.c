#include<stdio.h>
int main()
{
    int a[10],sum;
    printf("enter 10 elemnts =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<10;i++)
        sum=sum+a[i];
    float av=sum/10.0;
    printf("average of array is = %.2f ",av);
    return 0;
}
