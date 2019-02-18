#include<stdio.h>
#include<stdlib.h>
struct Block
{
    int data;
    struct Block *next;

};
struct Block *start=NULL;
struct Block *last=NULL;
struct Block *createNode()
{
    struct Block *ptr;
    printf("Enter the data:");
    ptr=(struct Block*)malloc(sizeof(struct Block));
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    return ptr;
  }
void Insertion()
{
    struct Block *ptr1=NULL,*ptr=NULL;
    ptr1=createNode();

    if(start==NULL)
        {
         start=ptr1;
         last=ptr1;
         last->next=start;
         start->next=last;

        }
        else
        {
           ptr1->next=start;
           start=ptr1;
           last->next=start;

        }

}
void traverse()
{
    struct Block *ptr=NULL;
    ptr=last->next;
    if(last==NULL)
        printf("The list is empty.");
    else{
     ptr=last->next;
    printf("The Traverse list is.\n");
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=start);
}
}
void deletion()
{
    struct Block *ptr;
    if(start==NULL)
        printf("You have no element to delete.");
    else
    {
        ptr=start;
        while(ptr->next!=start)
            ptr=ptr->next;
        ptr->next=start->next;
         free(start);
         start=ptr->next;
       last->next=start;
    }
       int main()
{
    int choice=1,ch;
    while(choice)
    {
        printf("1.Enter the Data in the List.\n");
        printf("2.Display the Data.\n");
        printf("3.Deletion in circular Linked list.\n");
        printf("Enter the Choice.");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Insertion();
                   break;
            case 2:traverse();
                    break;
            case 3:deletion();
                   break;
            default: break;

        }

        printf("Do you want to coninue.");
        scanf("%d",&choice);

    }
    return 0;

}
