#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


int main()
{
    int ch;
    struct node *head,*newnode,*temp;
    head=NULL;
    while(ch!=3)
    {
        printf("Enter 1 for insert\nEnter 2 for display\nEnter 3 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data you want to enter\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=head;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
            break;

        case 2:
            temp=head;
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                temp=temp->next;
            }
            break;

        default:
            printf("invalid choice\n");

        }
    }
    return 0;

}
