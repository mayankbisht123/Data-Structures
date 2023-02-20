#include<stdio.h>
int get();
int main()
{
   get();
   return 0;
}
int get()
{
    int i,n,j,math,eng,sci;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    int a[n][3],b[n];
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of %d student\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Enter the marks of %d subject\n",j+1);
            scanf("%d",&a[i][j]);
             b[i]=b[i]+a[i][j];

        }
        printf("The average of %d student is= %d\n",i+1,b[i]/3);


    }
    for(i=0;i<n;i++)
    {
        int c=0;
        c=c+b[i];
    }
    printf("The average of class is =%d\n",b[i]/n);
}
