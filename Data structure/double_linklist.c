#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* pre;
};
struct node* head=NULL;
void implement()
{
    int x;
    struct node* temp=head;
   struct node* newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data you want to insert\n");
   scanf("%d",&x);
   newnode->data=x;
   newnode->next=newnode->pre=NULL;
   if(head==NULL)
   {
       head=newnode;
       temp=head;
   }
   else
   {
       while(temp->next!=NULL)
        temp=temp->next;

       temp->next=newnode;
       newnode->pre=temp;
       temp=newnode;
   }
}
void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int ch,i;
    while(ch!=4)
    {
        printf("Enter 1 for implement\nEnter 2 for dipaly\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            implement();
            break;

        case 2:
            display();
            break;
        }
    }
    return 0;
}
