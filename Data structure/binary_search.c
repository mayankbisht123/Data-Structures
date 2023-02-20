#include<stdio.h>
int binary(int a[],int low,int high ,int ele)
{
    int mid;
if(low<=high)
{
    mid=(low+high)/2;
    if(a[mid]<ele)
      return binary(a,mid+1,high,ele);
    else if(a[mid]>ele)
        return binary(a,low,mid-1,ele);
    else
        return mid;
}
else
return -1;
}
int main()
{
    int n,num,c,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int low=0,high=n-1;
    int a[n];
    printf("Enter the element in array in ascending order\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the element you want to search\n");
    scanf("%d",&num);
    c=binary(a,low,high,num);
    if(c==-1)
        printf("Element is not present\n");
    else
        printf("Element is present at %d index \n",c);

    return 0;

}
