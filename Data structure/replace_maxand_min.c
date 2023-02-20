#include<stdio.h>
int main()
{
    int n,max,min,p,q,temp,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i]){
        max=a[i];
        p=i;
        }

        if(min>a[i]){
            min=a[i];
            q=i;
        }
    }

    temp=a[p];
    a[p]=a[q];
    a[q]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
