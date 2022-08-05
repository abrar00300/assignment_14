#include<stdio.h>
int main()
{
    int a[10],sume=0,sumo=0;
    printf("enter 10 elemtns =");
    for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sume=sume+a[i];
        else
            sumo=sumo+a[i];
    }
    printf("sum of all even numbers are %d \n sum of all odd numbers are %d",sume,sumo);
    return 0;
}
