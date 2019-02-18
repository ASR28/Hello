#include<stdio.h>
#include<stdlib.h>
struct BLOCK
{
struct BLOCK *next;
int data;
};
struct BLOCK *top;
int isEmptyBlock()
{
    if(top==NULL)
        return 1;
    return 0;
}
void findingLoop()
{
    struct BLOCK *firstptr,*lastptr;
    firstptr=top;
    lastptr=top;
    while(firstptr&&lastptr&&lastptr->next)
    {
        firstptr=firstptr->next;
        lastptr=lastptr->next->next;
        if(firstptr==lastptr)
        {
            printf("The Linked list contain loop.\n");
            return;
        }

    }
    printf("The linked list does'nt  contain loop.\n");

}
struct BLOCK* createBLOCK()
{
    struct BLOCK *ptr=NULL;
    ptr=(struct BLOCK *)malloc(sizeof(struct BLOCK));
    printf("Enter the Data:");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    return ptr;
};
void pushBLOCK()
{
  struct BLOCK *ptr1=NULL;
  ptr1=createBLOCK();
  if(isEmptyBlock())
      top=ptr1;
      else
    {
     ptr1->next=top;
     top=ptr1;
    }

}
void printBlock()
{
    struct  BLOCK *temp;
    temp=top;
    if(isEmptyBlock())
     printf("The Linked List is Empty.\n");
     else
     {
         printf("The Linked list is.\n");
         while(temp!=NULL)
         {
             printf("%d ",temp->data);
             temp=temp->next;

         }
     }
}
int main()
{
    int ch=1,choice,flag;
    while(ch)
    {
     printf("1. To enter the data in linked list.\n");
     printf("2. To print the complete list.\n");
     printf("3. To detect the loop in the linked list.\n");
     printf("Enter the choice.");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:pushBLOCK();
                 break;
         case 2:printBlock();
                break;
         case 3:findingLoop();
                break;
         default:break;
     }

     printf("Do you want to continue.");
     scanf("%d",&ch);
    }

   return 0;
}
