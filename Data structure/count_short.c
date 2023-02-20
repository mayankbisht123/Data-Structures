#include<stdio.h>
int main()
{
    int n,i,temp,k,m;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
          max=a[i];
        }
    }
    m=max+1;
    int b[m];
    for(i=0;i<m;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        b[k]=b[k]+1;
    }
    for(i=0;i<m;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    int c[n];
i=0;k=0;
while(i<m)
{
    if(b[i]>0)
    {
        c[k]=i;
        k++;
        b[i]--;
    }
    else
        i++;
}
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}
