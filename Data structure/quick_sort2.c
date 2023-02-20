#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int start=lb,end=ub,p=a[lb],temp;
    while(start<=end)
    {
        while(a[start]<=p)
            start++;
        while(a[end]>p)
            end--;

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
int quicksort(int a,int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
      loc=partition(a,lb,ub);
      quicksort(a,loc+1,ub);
      quicksort(a,lb,loc-1);
    }

}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,4);
    for(i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}
