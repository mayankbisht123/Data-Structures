#include<stdio.h>
int main()
{
    int a[5],i,j,temp,min,in;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        min=a[i];
        in=i;
        for(j=i+1;j<5;j++)
        {
            if(min>a[j])
            {
               min=a[j];
               temp=a[j];
               a[j]=a[in];
               a[in]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return 0;
}

