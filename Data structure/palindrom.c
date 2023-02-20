#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1,front=0;
int *a;
int size;
void push(int val)
{
    if(top==size-1)
        printf("Stack overflow\n");
    else
    {
        printf("Enter the value you want to push\n");
        scanf("%d",&val);
        top++;
        a[top]=val;
    }
}
int pop()
{
    int val;
    if(top==-1)
    printf("Stack underflow\n");

    else
    {
       val=a[top];
       top--;
       return val;
    }
}
int main()
{
    int val,n,f=-1,pal=0,ch,i;
    int *b;
    printf("Enter the size of stack\n");
    scanf("%d",&size);
    a=(int*)malloc(size*sizeof(int));

    while(ch!=4)
    {
        printf("Enter 1 for push\n Enter 2 for pop\n Enter 3 for check\n Enter 4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push(val);
            break;

        case 2:
                     for (i = 0;i < (strlen(a) / 2);i++)
            {
                if (a[top] == a[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("it is not a palindrome\n");
                    break;
                }
            }
            if ((strlen(a) / 2)==front)
                printf("it is palindrome\n");
            front  =  0;
            top  =  -1;
            break;

        case 3:
            for(i=0;i<=top;i++)
                printf("%d\t",a[i]);
            break;


            default :
                printf("Invalid choice\n");

        }
    }
    return 0;
}
