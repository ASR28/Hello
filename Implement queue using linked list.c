# include<stdio.h>
struct Node
{
    int data;
   struct  Node *Next;

};
struct Node *front=NULL;
struct Node *rear=NULL;
struct Node * createNode()
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the Data:");
    scanf("%d",&ptr->data);
    ptr->Next=NULL;
   return ptr;

};
void enqueue()
{
    struct Node *ptr,*ptr1;
    ptr=createNode();
    if(rear==NULL)
        {
          rear=ptr;
          front=ptr;
        }


    else
    {
       ptr1=rear;
     while(ptr1->Next!=NULL)
            ptr1=ptr1->Next;
         ptr1->Next=ptr;
         rear=ptr1;
    }
}
void dequeue()
{
     struct Node *ptr;

        if(front==NULL)
            printf("The Queue has no element to delete");

          else
          {
              ptr=front;
              front=front->Next;
              printf("\nThe Deleted element is.%d\n",ptr->data);
              free(ptr);


          }

}
void traverse()
{
    struct Node *ptr=front;
    if(ptr==NULL)
        printf("Queue has nothing to display.");
    else
    {
     while(ptr!=NULL)
     {
         printf("%d ",ptr->data);
         ptr=ptr->Next;
     }
    }


}
int main()
{
    int choice=1,ch;
    while(choice)
    {
        printf("1. To enter element in queue.\n");
        printf("2. To remove element in queue.\n");
        printf("3. To tranverse Queue.\n");
        printf("Enter your choice.");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:traverse();
                    break;
            default: break;
        }


        printf("\nDo you want to continue.");
       scanf("%d",&choice);
    }


 return 0;
}
