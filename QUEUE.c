# include<stdio.h>
#define MAX 5
int array[MAX];

int front=0;
int rear=-1;
int isfull()
{
    if(rear==MAX-1)
        return 1;
    else
        return 0;

}
int isempty()
{

    if(rear<front)
        return 1;
    else
        return 0;
}
void enqueue(int x)
{
     if(isfull())
        printf("Queue is full.");
     else
    {
       array[++rear]=x;
     }

}
void dequeue()
{
    int x;
    if(isempty())
        printf("Queue is empty.");
    else
    {
        x=array[front];
        printf("\nThe deleted element is: %d\n",x);
        front=front+1;
    }
}
void traverse()
{
    int i;
    if(isempty())
        printf("The queue is empty.");
    else
        {
           for(i=front;i<=rear;i++)
            printf("%d ",array[i]);
        printf("\n");

        }

}
int main()
{
    int flag=1,choice,num1;
    while(flag)
    {
        printf("Enter the element in Queue.\n");
        printf("Delete element in Queue.\n");
        printf("Traverse element in Queue.\n");
        printf("\nEnter your choice.");
        scanf("%d",&choice);
        switch(choice)
        {
      case 1: printf("Enter the element.");
              scanf("%d",&num1);
              enqueue(num1);
               break;
      case 2:dequeue();
              break;
      case 3:traverse();
                break;
      case 4: break;

        }
      printf("\n Do you wanna to continue.");
      scanf("%d",&flag);

    }
return 0;
}


