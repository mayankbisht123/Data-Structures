#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // link nodes with eachother
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=88;
    third->next=fourth;
    fourth->data=89;
    fourth->next= NULL;

    display(head);
    return 0;
}
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
