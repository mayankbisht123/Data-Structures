#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=1;i<5;i++)
    {
        int temp=a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return 0;
}
