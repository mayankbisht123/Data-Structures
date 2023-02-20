#include<stdio.h>
int main()
{
    int max,min,n,i,j,inmin,temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After the elements are sorted\n");
    for(i=0;i<n;i++)
    {
        min=a[i];
        inmin=i;
        for(j=i;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                temp=a[j];
                a[j]=a[inmin];
                a[inmin]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);

    return 0;
}
