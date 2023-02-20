#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int start,end,i,temp=0;
    int p=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=p)
        {
            start++;
        }

        while(a[end]>p)
        {
            end--;
        }
        if(start<end)
        {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        }
    }
    temp=a[end];
    a[end]=a[lb];
    a[lb]=temp;
    return end;
}
void quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int a[5],i;
    printf("Enter array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,4);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
