#include<stdio.h>
void mergesort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(a,lb,ub,mid)
{
    int i,j,k;
    k=i=lb;
    j=mid+1;
    int b[k];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
}

int main()
{
    int a[]={3,8,1,5,2,1,90,5,3},n=9;
    mergesort(a,0,9);
    for(int i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
    return(0)
}
