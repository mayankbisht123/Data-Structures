#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int n;
    int f,r;
    int *a;
};
void enqueue(struct queue *q,int val)
{

    if(q->f==0 && q->r==q->n-1 || q->f==q->r+1)
        printf("queue is full\n");
    else
    {
        if(q->f==-1)
            q->f=0;
        q->r=(q->r+1)%q->n;
        q->a[q->r]=val;
        printf("The %d is enqueued\n",q->a[q->r]);

    }
}
int dequeue(struct queue *q)
{

    int val=-1;
    if(q->f==-1)
        printf("queue is empty\n");
    if(q->f==q->r)
    {

        q->f=-1;
        q->r=-1;
        val=q->a[q->f];
    }
    else
    {
        val=q->a[q->f];
        q->f=(q->f+1)%q->n;

    }
    return val;
}
void display(struct queue *q)
{
    int i;
    if(q->f==-1)
        printf("queue is empty\n");
    else{
           for( i=q->f;i!=q->r;i=(i+1)%q->n)
            {
                printf("%d\n",q->a[i]);
            }
            printf("%d\n",q->a[i]);
    }
}
int main()
{
    int ch,val;
    struct queue q;
    q.f=q.r=-1;
    printf("Enter the size of array\n");
    scanf("%d",&q.n);
    q.a=(int *)malloc(q.n*sizeof(int));
    if(q.a==NULL)
        return 0;
    else{
    while(ch!=4)
    {
        printf("Enter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 for display\nEnter 4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            scanf("%d",&val);
            enqueue(&q,val);
            break;
        case 2:
            printf("The %d is poped\n",dequeue(&q));
            break;
        case 3:
               if(q.f==-1)
        printf("queue is empty\n");
    else{
        display(&q);
        break;
    }
        default :
            printf("Invalid argument\n");

        }
    }
    }
    return 0;
}
