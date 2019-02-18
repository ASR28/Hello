#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *Next;
    int data;

};
struct Node *top=NULL;
struct Node *start=NULL;
struct Node *  createNode()
{
    struct Node *ptr=NULL;
    printf("Enter the Data:");
    ptr=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&ptr->data);
    ptr->Next=NULL;
    return ptr;
};
struct Node * reverse( )
{
  struct Node *ptr1=NULL,*ptr2=NULL,*ptr3=NULL;
  ptr3=top;
 while(ptr3!=NULL)
 {

     ptr2=ptr3->Next;
     ptr3->Next=ptr1;
     ptr1=ptr3;
     ptr3=ptr2;
 }
  return ptr1;
}

void push()
{
    struct  Node *ptr=NULL;
    ptr=createNode();
    if(top==NULL)
        top=ptr;
     else
        {
              ptr->Next=top;
              top=ptr;
        }

}
void pop()
{
    struct Node *ptr;

    if(top==NULL)
        printf("\nNothing to pop in stack.\n");
    else
    {
        ptr=top;
        top=top->Next;
    }

}
void tranverse()
{
    struct Node *ptr=top;
    if(ptr==NULL)
        printf("Stack is empty.");
    else
    {
        printf("The Stack is.\n");
        while(ptr!=NULL)
        {
         printf(" %d",ptr->data);
          ptr=ptr->Next;
        }
    }
}


int main()
{
   int ch,choice1=1;
   while(choice1)
   {

       printf("1.Push the element in stack.\n");
       printf("2.Pop the element from stack.\n");
       printf("3.Reverse the  Linked List.\n");
       printf("4.Tranverse the Linked List.\n");
       printf("5.Tranverse the Reversed LinkedList.\n");

       printf("Enter the Choice.");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1: push();
                   break;
           case 2: pop();
                   break;
           case 3: top=reverse();
                    break;
           case 4: tranverse();
                    break;

           default: break;

       }

       printf("\nDo you want to continue.");
       scanf("%d",&choice1);
   }

 return 0;
}
