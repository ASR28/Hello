#include<stdio.h>
#include<string.h>
int top=-1;
int front=0;
int rear=-1;
char string[]={"I","N","D","I","A","\0"};
int MAX=strlen(string);
char queue[MAX];
char Stack[MAX];
isemptystack()
{
    if   if(top==-1)
        return 1;
        else
            return 0;

}
isfullstack()
{
    if(top==MAX-1)
        return 1;
     return 0;
}
 isemptyqueue()
{
    if(rear<front)
        return 1;
    else
        return 0;
}
isfullqueue()
{
    if(rear==MAX-1)
        return 1;
    else
        return 0;

}
void enqueue()
{
    if(isfullqueue())
        printf("\nThe Queue is empty.\n");
    else
    {
        for(int i=MAX-1;i>=0;i--)
             queue[++rear]=string[i];

    }
}
void dequeue()
{
    if(isemptyqueue())
        printf("\nThe Queue is empty.\n");
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

main()
{
    printf("The string is %s",string);
    return 0;
}
