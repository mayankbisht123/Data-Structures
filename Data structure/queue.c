#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int f,r;
int *arr;
};
int isEmpty(struct queue *q)
{
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val)
{
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("The valude at %d position is %d\n",q->r+1,q->arr[q->r]);
    }
}
int dequeue(struct queue *q)
{
    int val;
    if(isEmpty(q)){
        printf("Stack is empty\n");
    }
    else{
        q->f++;
        val=q->arr[q->f];
        return val;
    }
}
int main()
{
   struct queue q;
   printf("Enter the size of queue\n");
   scanf("%d",&q.size);
   q.f=q.r=-1;
   q.arr=(int*)malloc(q.size*sizeof(int));
   enqueue(&q,100);
   enqueue(&q,33);
   enqueue(&q,144);
   enqueue(&q,105);
   dequeue(&q);
    dequeue(&q);
     dequeue(&q);
      dequeue(&q);

   if(isEmpty(&q)){
    printf("Stack is empty\n");
   }
   if(isFull(&q)){
    printf("Stack is full\n");
   }
}

