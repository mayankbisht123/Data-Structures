#include<stdio.h>
#include<stdlib.h>
int top=-1;
int n=100;
char *arr;
void push(char val)
{
    if(top==n-1)
        printf("Stack overflow\n");
    else{
        top++;
        arr[top]=val;
    }
}
int pop()
{
    if(top==-1)
        printf("Stack underflow\n");
    else{
        top--;
    }
}
int parenthesis(char *exp)
{
    int i,j;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        push('(');

        else if(exp[i]==')')
        {
                if(top==-1)
                   return j=0;
                else
                    pop();
        }
        if(top==-1)
            return j=1;
            else
                return j=0;

    }
}
int main()
{
    char *exp="(8*7)";
    arr=(char*)malloc(n*sizeof(char));
    if(parenthesis (exp)==1)
        printf("Patenthesis is balanced");
    else
        printf("parenthesis is unbalanced");

    return 0;
}
