#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start=NULL;

int isempty()
{
    if(start==NULL)
        return 1;
    else
        return 0;

}
struct Node * createnode()
{
 struct Node *node=NULL;
 node=(struct Node *)malloc(sizeof(struct Node));
 printf("Enter the Data value.");
 scanf("%d",&node->data);
   node->next=NULL;
   return node;

}
void NodeCount()
{
    struct Node *ptr=NULL;
    ptr=start;
    int count=0;
    while(ptr!=NULL)
    {
        ++count;
        ptr=ptr->next;
    }

   printf("The Number of Node is:%d",count);
}

void insertBeg()
{
    struct Node *ptr;
    ptr=createnode();
    if(start==NULL)
       start=ptr;
    else
    {
       ptr->next=start ;
       start=ptr;

    }
}
void insertEnd()
{
    struct Node *ptr,*ptr1;
    ptr=createnode();
    if(start==NULL)
        start=ptr;
   else
   {
    ptr1=start;
    while(ptr1->next!=NULL)
         ptr1=ptr1->next;
     ptr1->next=ptr;
   }

}


void sort()
{
    struct Node *p,*q;
    p=start;
    int temp;
    while(p!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(q->data>p->data)
            {
               temp=q->data;
               q->data=p->data;
               p->data=temp;
            }
        q=q->next;
        }
        p=p->next;
    }

}
void delBeg()
{
 struct Node *ptr=NULL;


 if(isempty())
    printf("\n List is empty.");
  else
    {
     ptr=start;
     printf("The Deleted item is:%d\n",ptr->data);
     start=start->next;
     free(ptr);
    }

}
struct Node* Reverse()
{
    struct Node *PTR1=NULL,*PTR2=NULL,*PTR3=NULL;
    PTR3=start;
    while(PTR3!=NULL)
    {
        PTR2=PTR3->next;
        PTR3->next=PTR1;
        PTR1=PTR3;
        PTR3=PTR2;
    }
  return PTR1;
}
void insertAtMid ()
{
    int pos;
    struct Node *ptr1;
    struct Node *ptr=NULL;
    ptr1=createnode();
    ptr=start;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++)
       {
        ptr=ptr->next;
       }


            ptr1->next=ptr->next;
            ptr->next=ptr1;
}
void transverse()
{
    struct Node *ptr;
    ptr=start;
    if(isempty())
        printf("The has no element to transverse.");
    else{
    printf("The Linked list is.\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
   }
    printf("\n");
}
void deletionEnd()
{
    struct Node *ptr,*prev;
    ptr=start;
    if(isempty())
        printf("THE LIST IS EMPTY");

    else if(ptr->next==NULL)
    {
         prev=ptr;
         free(prev->next);
         prev->next=NULL;
         start=NULL;
    }
    else
    {
      while(ptr->next!=NULL)
      {
          prev=ptr;
          ptr=ptr->next;
      }
        free(prev->next);

        prev->next=NULL;

    }

}



void main()
{
    int choice=1,ch;
    while(choice)
    {
        printf("1.Enter the node at Beginning.\n");
        printf("2.Transverse the Node.\n");
        printf("3.Deletion at Beginning.\n");
        printf("4. Insert at the end.\n");
        printf("5. Deletion at the end.\n");
        printf("6. Insert at Middle.\n");
        printf("7. Renverse the List.\n");
        printf("8. Count Number of Nodes.\n");
        printf("9.Sort the Singly linked List.");
        printf("Enter the Choice.");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertBeg();
                   break;
            case 2:transverse();
                   break;
            case 3:delBeg();
                   break;
            case 4:insertEnd();
                    break;
            case 5:deletionEnd();
                   break;
            case 6:insertAtMid();
                    break;
            case 7:start=Reverse();
                   break;
            case 8:NodeCount();
                   break;
            case 9:sort();
                   break;
               default:break;

        }
       printf("\nDo u wanna to continue.");
       scanf("%d",&choice);
    }
}
