#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insert()
{
    struct node* newnode;
    struct node* temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the value you want to enter\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=head;
        temp->next=head;
    }
    else
    {
        temp=head;
      while(temp->next!=head)
      {
          temp=temp->next;
      }
      temp->next=newnode;
      newnode->next=head;
    }
}
void dispaly()
{
    struct node* temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main()
{
    int ch;
    while(ch!=4)
    {
        printf("Enter 1 for inset,2 for display\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;

        case 2:
            dispaly();
            break;

        default :
            printf("Invalid choice\n");
        }
    }
    return 0;
}
