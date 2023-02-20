#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=0;
struct node *last=0;
void push(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=0;
if(head==0)
{
head=newnode;
last=newnode;
}
else
{
newnode->data=x;
newnode->next=head;
head=newnode;
}
}
void pop()
{
if(head==0)
printf("stack is empty\n");
else
{
struct node *temp;
temp=last;
last=->next;
free(temp);
}
}
void display()
{
struct node *temp;
temp=head;
while(temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
int main()
{
int ch,x;
while(1)
{
printf("\n1 to push\n2 to pop\n3 to display\n4 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter element to push\n");
scanf("%d",&x);
push(x);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("invalid choice");
}
}
}



