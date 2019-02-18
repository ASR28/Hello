#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;

};
struct Node *start=NULL;
struct Node *createNode()
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the Data");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
     ptr->prev=NULL;
     return ptr;

}
void deleteDuplicate(struct Node *root,struct Node *dele)
{
    if(root==NULL||dele==NULL)
        return;
    if(root==dele)
        root=dele->next;
    if(dele->next!=NULL)
        dele->next->prev=dele->prev;
    if(dele->prev!=NULL)
     dele->prev->next=dele->next;

    free(dele);


}
void removeDuplicate(struct Node *root)
{
    struct Node *ptr1,*ptr2,*ptr3;
    if(root==NULL&&root->next==NULL)
        return;
    for(ptr1=root;ptr1!=NULL;ptr1=ptr1->next)
    {
        ptr2=ptr1->next;
        while(ptr2!=NULL)
        {
            if(ptr1->data==ptr2->data)
            {
                ptr3=ptr2->next;
                deleteDuplicate(root,ptr2);
                ptr2=ptr3;

            }
           else
            ptr2=ptr2->next;
          }
     }
}
void reversedoubly()
{
    struct Node *temp=NULL;
    struct Node *curr=NULL;
    curr=start;
    if(curr==NULL)
        printf("The Doubly linked list is empty.\n");
    else
    {
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
        start=temp->prev;

}
}
void InsertatBeg()
{
    struct Node *ptr;
    ptr=createNode();
    if(start==NULL)
        start=ptr;
    else
    {
        ptr->next=start;
        start->prev=ptr;
        start=ptr;
    }

}
void tranverse()
{
    struct Node *ptr;
    if(start==NULL)
        printf("The Doubly linked list is empty.");
    else
    {
    ptr=start;
    printf("The Linked List is.\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
   }
    }

}
void tranversefromend()
{
    struct Node *ptr;
    ptr=start;
    printf("The Linked List is.\n");
    while(ptr!=NULL)
        ptr=ptr->next;

    while(ptr!=NULL)
    {
      printf("%d",ptr->data);
      ptr=ptr->prev ;

    }
}
void DeletionAtBeg()
{
    struct Node *ptr=NULL;
    if(start==NULL)
        printf("\n Doubly linked list is empty.\n");
  else{
    ptr=start;

    start=start->next;
    if(start!=NULL)
                               start->prev=NULL;
    printf("The deleted Node is.%d",ptr->data);
           free(ptr);
    }
}
void deleteAtend()
{
    struct Node *ptr=NULL,*temp;
    if(start==NULL)
        printf("\n Doubly linked list is empty.\n");
  else
  {
      ptr=start;
      while(ptr->next!=NULL)
       ptr=ptr->next;

          temp=ptr;
          ptr=ptr->prev;
          ptr->next=NULL;
          free(temp);
  }
}


int main()
{
    int choice=1,ch;
    while(choice)
{
     printf("1.Enter the Data in Doubly linked list.\n");
     printf("2.Tranverse the List.\n");
     printf("3. Deletion in Doubly Linked List.\n");
     printf("4. Traverse from the end.\n");
     printf("5. Remove Duplicates from Linked List.\n");
     printf("6.Reverse the doubly linked list.\n");
     printf("7.Deletion from end.\n");
     printf("Enter the Choice.");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:InsertatBeg();
                break;
         case 2:tranverse();
                break;
         case 3:DeletionAtBeg();
                break;
         case 4:tranversefromend();
                break;
         case 5:removeDuplicate(start);
                break;
         case 6:reversedoubly();
                break;
         case 7:deleteAtend();
                 break;


         default:break;

     }

     printf("\nDo you want to continue.");
     scanf("%d",&choice);
}
    return 0;
}
