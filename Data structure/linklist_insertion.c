#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next
};
int main()
{
    int key;
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));


    head->data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=NULL;
    fourth->data=6;
    fourth->next=NULL;
    display(head);
    printf("Enter the data after which you want to insert\n");
    scanf("%d",&key);
    insert(head,fourth,key);
    display(head);


}
void display(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
void insert(struct node *p,struct node* q,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
           q->next=p->next;
           p->next=q;
           break;
        }
        p=p->next;
    }
}

