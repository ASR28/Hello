#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left,*right;

};
struct Node * CreateNode(int key)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=key;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
};
struct Node * insert(struct Node *ptr,int key)
{

     if(ptr==NULL)
        return CreateNode(key);
    if(key<ptr->data)
        ptr->left=insert(ptr->left,key);
else if(key>ptr->data)
            ptr->right=insert(ptr->right,key);

     return ptr;
}

void inorder(struct Node *ptr)
{
      if(ptr==NULL)
      return ;
   else
   {
   inorder(ptr->left);
   printf("%d0",ptr->data);
   inorder(ptr->right);
   }
}
void preorder(struct Node *ptr)
    {
        if(ptr==NULL)
        return ;
    else
    {

        printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }

}
void postorder(struct Node *ptr)
    {
        if(ptr==NULL)
        return ;
    else
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}
struct Node * MinValue(struct Node *cur)
{
 while(cur->left!=NULL)
     cur=cur->left;
     return cur;
}
struct Node* MaxValue(struct Node *temp)
{
     while(temp->right!=NULL)
            temp=temp->right;
     return temp;
}
struct Node * deleteNode(struct Node *root,int key)
{
    struct Node *temp=NULL;
    if(root==NULL)
        {
         return root;
        }
        else if(key<root->data)
           {
           root->left=deleteNode(root->left,key);
           }
      else if(key>root->data)
         {
         root->right=deleteNode(root->right,key);
         }
      else
      {
          // for deleted Node HAS ONLY ONE ELEMENT
          if(root->left==NULL)
                   {
                       temp=root->right;
                       free(root);
                       return temp;
                   }

          else if(root->right==NULL)
          {
              temp=root->left;
               free(root);
               return temp;
          }
         struct Node *t=MinValue(root->right);
         root->data=t->data;
         root->right=deleteNode(root->right,root->data);
      }
      return root;
}


int main()
{
    int choice1=1,d,ch;
    struct Node *root=NULL;
    while(choice1)
    {
        printf("Enter the Element in the tree\n");
        printf("Remove the element from the tree.\n");
        printf("The Inorder traversal is.\n");
        printf("The preorder traversal is.\n");
        printf("The postorder traversal is.\n");
        printf("Enter the Choice.");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1: printf("Enter the Data:");
                  scanf("%d",&d);
                  root=insert(root,d);
                  break;
           case 2:printf("Enter the Data you wanna delete:");
                  scanf("%d",&d);
                  root=deleteNode(root,d);
                  break;
           case 3:printf("The Inorder traversal is.\n");
                  inorder(root);
                  break;
           case 4:printf("The preorder traversal is.\n");
                  preorder(root);
                  break;
           case 5:printf("The postorder traversal is.\n");
                  postorder(root);
                  break;

        }
        printf("Do you wanna to continue.");
        scanf("%d",&choice1);
    }
    return 0;

}
