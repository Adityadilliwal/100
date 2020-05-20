//Circular Queue
#include <stdio.h>
#define size 5
void inq(int[], int);
void deq(int[]);
void display(int[]);
int front= -1;
int rear= -1;
int main()
{
    int n,ch;
    int queue[size];
    do
    {
        printf("Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                inq(queue,n);
                break;
            case 2:
                deq(queue);
                break;
            case 3:
                display(queue);
                break;
        }
    }while(ch!=0);
}
void inq(int queue[],int item)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
        printf("queue is full");
        return;
    }
    else if(rear== -1)
    {
        rear++;
        front++;
    }
    else if(rear==size-1&&front>0)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=item;
}
void display(int queue[])
{
    printf("\n");
    if (front>rear)
    {
        for(int i=front;i<size;i++)
        {
            printf("%d ",queue[i]);
        }
        for(int i=0;i<=rear;i++)
            printf("%d ",queue[i]);
    }
    else
    {
        for(int i=front;i<=rear; i++)
            printf("%d ",queue[i]);
    }
}
void deq(int queue[])
{
    if(front==-1)
    {
        printf("Queue is empty ");
    }
    else if(front==rear)
    {
        printf("\n %d deleted",queue[front]);
        front= -1;
        rear= -1;
    }
    else
    {
        printf("\n %d deleted",queue[front]);
        front++;
    }
}
