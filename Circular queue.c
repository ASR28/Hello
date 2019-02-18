#include<stdio.h>
#define MAX 5

int cirqueue[MAX];
int front =-1;
int rear=-1;
int isfull()
{
    if((front==0&&rear==MAX-1)||(front==rear+1))
        return 1;
    return 0;

}
int isempty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}
void enqueue(int x)
{
    if(isfull())
        printf("\nQueue is full.\n");
   else{
   if(rear==-1)
    {

        front=0;
    }
    else if(rear==MAX-1)
         rear=0;

     rear++;
     cirqueue[rear]=x;


   }
}
void dequeue()
{
    int x;
    if(isempty())
     {
         printf("\n Queue is empty.");
     }
     else
        {
          x=cirqueue[front];
         if(front==rear)
           {
               rear=-1;
               front=-1;
           }
         else if(front==MAX-1)
            front=0;
        else
            ++front;

          printf("\nThe Deleted element is.%d\n",x);
        }

}
void traverse()
{
   int i;
    if(isempty())
       printf("The Queue is empty.");
    else
    {
       printf("\nThe Queue is.\n");
       for( i=front;i<=rear;i++)
            printf("%d ",cirqueue[i]);

    }

}
int main()
{
   int data,choice,flag=1;
   while(flag)
   {
       printf("1. Enter the data in Queue.\n");
       printf("2. Remove data from Queue.\n");
       printf("3.Traverse the Queue.\n");
       printf("Enter the choice.");
       scanf("%d",&choice);
       switch(choice)
       {
         case 1:printf("Enter the value.\n");
                scanf("%d",&data);
                enqueue(data);
                break;
         case 2:dequeue();
                break;
         case 3:traverse();
                break;
         default: break;
       }
       printf("\nDo you want to continue.");
       scanf("%d",&flag);
   }

       return 0;
       }






