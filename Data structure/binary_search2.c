#include<stdio.h>
int binary(int a[],int l,int h,int ele)
{
    int m;
    if(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==ele)
            return m;
        else if(a[m]<ele)
            binary(a,m+1,h,ele);
        else
            binary(a,l,m-1,ele);
    }
    else
    return -1;
}
int main()
{
    int a[5],i,c;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    c=binary(a,0,4,5);
    if(c==-1)
        printf("Element is not present");
    else
        printf("%d is present",a[c]);

    return 0;
}
