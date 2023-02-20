#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head=0;

void insert_at_beg(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=newnode;
}
else
{
head->prev=newnode;
newnode->next=head;
head=newnode;
}
}
void insert_at_end(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=newnode;
}
else
{
struct node *temp;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
}
void display()
{
struct node *temp;
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void delete_from_beg()
{
struct node *temp;
temp=head;
head=head->next;
free(temp);
}
void delete_from_end()
{
struct node *temp,*last;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
last=temp;
last=last->prev;
last->next=0;
free(temp);
}
int main()
{
int ch,n;
while(1)
{
printf("\n1 to insert at beg.\n2 to insert at end\n 5 to display");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter element");
scanf("%d",&n);
insert_at_beg(n);
break;
case 2:
printf("\nenter element");
scanf("%d",&n);
insert_at_end(n);
break;
case 3:
delete_from_beg();
break;
case 4:
delete_from_end();
break;
case 5:
display();
break;
default:
exit(0);
}
}
}
