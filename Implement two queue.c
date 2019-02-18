#include<stdio.h>
#define MAX 6
int arr[MAX];
front1=0;
rear1=-1;
rear2=MAX-1;
front2=MAX;
int isfull1()
{
    if(rear1==rear2)
        return 1 ;
    else
        return 0;
}
/*int isfull2()
{
    if(rear2==(MAX/2)-1)
        return 1;
       return 0;
}*/
int  isempty1()
{
    if(front1==rear1)
        return 1;
    return 0;
}
int isempty2()
{

    if(front2==rear2)
        return 1;

        return 0;
}
void enqueue1()
{
    if(isfull1())
        printf("\n Queue1 is full.\n");
    else
    {
        int x;
         printf("Enter the data.");
         scanf("%d",&x);
         arr[++rear1]=x;

    }
}
void enqueue2()
{
    if(isfull1())
        printf("\n Queue2 is full.\n");
    else
      {
         int x;
         printf("Enter the data.");
         scanf("%d",&x);
         arr[--rear2]=x;
      }

}
void dequeue1()
{
  if(isempty1())
  {
      printf("The Queue 1 is empty");
  }
  else
  {
      int x;
      x=arr[front1++];
      printf("\nThe deleted element is. %d \n",x);
  }
}
void dequeue2()
{
  if(isempty2())
  {
      printf("The Queue 1 is empty");
  }
  else
  {
      int x;
      x=arr[--front2];
      printf("\nThe deleted element is. %d \n",x);
  }
}


void display()
{
    printf("\nThe Queue 1 is.\n");
    for(int i=front1;i<=rear1;i++)
        printf(" %d",arr[i]);
    printf("\nThe Queue 2 is.\n");
    for(int j=front2-2;j>=rear2;j--)
         printf(" %d",arr[j]);
}


int main()
{
    int choice=1,ch;

    while(choice)
    {
        printf("1.Enter the element in queue 1.\n");
        printf("2.Enter the element in queue 2.\n");
        printf("3.Remove element in queue 1.\n");
        printf("4.Remove element in queue 2.\n ");
        printf("5.Remove element in queue 2.\n ");
        printf("Enter the Choice.");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:enqueue1();
                    break;
            case 2:enqueue2();
                   break;
            case 3:dequeue1();
                    break;
            case 4:dequeue2();
                    break;
            case 5:display();
                   break;
            default:break;
        }
        printf("\nDo u want to continue.");
        scanf("%d",&choice);
    }
      return 0;
}

