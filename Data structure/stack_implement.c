#include<stdio.h>
int top=-1;
int n;
int a[50];
void push(int val)
{
    if(top==n-1)
    printf("Stack overflow\n");
    else{
        top++;
    a[top]=val;
    }
}
int pop()
{
    int val;
    if(top==-1)
        printf("Stack underflow");
    else
    {
        val=a[top];
        top--;
        return val;
    }
}

int peek(int a[],int top,int i)
{
    int op=top-i+1;
    if(op<0)
    {
        printf("none left\n\a");
        return -1;
    }
    else{
        return a[op];
    }
}

int main()
{
    int val,i,ch;
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    while(ch!=4)
    {
        printf("Enter 1 for push,2 for pop, 3 for display, 4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
    case 1:
    printf("Enter the element you want to push in stack\n");
    scanf("%d",&val);
    push(val);
    break;
    case 2:
        printf("The %d has been poped from stack \n",pop());
        break;
    case 3:
     for(i=1;i<=top+1;i++)
        printf("The value at %d is %d\n",i,peek(a,top,i));
     break;

    default:
        printf("Invalid option\n");
        }
    }
    return 0;
}
