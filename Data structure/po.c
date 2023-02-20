#include<stdio.h>
int main()
{
    char a[20];
    printf("enter the string\n");
    gets(a);
    for(int i=0;a[i]!='\0';i++)

    {
          if(a[i]==' ')
        {

            a[i]='#';
        }
    }
    printf("%s",a);
    return 0;
}
