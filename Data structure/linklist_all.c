#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;

void deletion_last()
{
   struct node* temp;
   struct node* last;
   temp=head;
   if(head==NULL)
    printf("Linklist is empty\n");

   else
   {
       while(temp->next!=NULL)
       {
           last=temp;
           temp=temp->next;
       }
       last->next=NULL;
       free(temp);

   }
}
void deletion_begin()
{
   if(head==NULL)
        printf("linklist is empty");

   else
   {
       struct node* temp;
      temp=head;
      head=head->next;
      free(temp);
   }
}
void insert_at_begin()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the no. you want to enter\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
       newnode->next=head;
       head=newnode;
    }

}
void insert_at_last()
{
    struct node* temp;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value you want to insert\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=head;
    }

    else
    {
        temp=head;
        while(temp->next!=0)
    {
       temp=temp->next;
    }
       temp->next=newnode;
       temp=newnode;
    }

}
void display()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int ch,x;
    while(ch!=8)
    {
        printf("Enter 1 for insert at last\nEnter 2 for display\nEnter 3 for insert at begining\nEnter 4 for deletion at last\n");
        printf("Enter 5 from deletion from begining\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert_at_last();
            break;

        case 2:
            display();
            break;

        case 3:
            insert_at_begin();
            break;

        case 4:
            deletion_last();
            break;

        case 5:
            deletion_begin();


        }
    }

}
