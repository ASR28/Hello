#include<stdio.h>
#define MAX 5
int queue[MAX];
int array[MAX];
int stack[MAX];
int rear=-1;
int front=0;
int top=-1;
void enterArray()
{
    printf("Enter the Array.\n");
    for(int i=0;i<MAX;i++)
        scanf("%d",&array[i]);
}
int isfullstack()
{
    if(top==MAX-1)
        return 1;
     return 0;
}
int isemptyqueue()
{
    if(rear<front)
        return 1;
    else
        return 0;
}
int isfullqueue()
{
    if(rear==MAX-1)

        return 1;

        return 0;
}
int isemptystack()
{

    if(top==-1)
        return 1;
        else
            return 0;

}
void enqueue()
{
  int i;
  if(isfullqueue())
        printf("\nThe Queue is full.\n");
  else
   {
       for(i=MAX-1;i>=0;i--)
       {
           queue[++rear]=array[i];
       }
   }
}
void dequeue()
{
  if(isemptyqueue())
    printf("The Queue is empty.\n");
    else
  {

      for(int i=0;i<MAX;i++)
      stack[++top]=queue[front++];
  }
}
void displaystack()
{

    if(isemptystack())
        printf("\nstack is empty.\n");
    else
     {
         printf("The Array is.\n");
         for(int i=0;i<=top;i++)
             printf("%d ",stack[i]);
     }
}





int main()
{
    enterArray();
    enqueue();
    dequeue();
    displaystack();
    return 0;
}
