#include<stdio.h>
int main()
{
int a[50],size,i,max,min,x,y,b;
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter the array\n");
for(i=0;i<size;i++)
    scanf("%d",&a[i]);

min=max=a[0];
for(i=0;i<size;i++)
{
    if(min>a[i])
    {
        min=a[i];
        x=i;
    }
    if(max<a[i])
    {
        max=a[i];
        y=i;
    }
}
b=a[x];
a[x]=a[y];
a[y]=b;
printf("After swaping \n");
for(i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
return 0;
}

