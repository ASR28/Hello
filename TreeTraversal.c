#include<stdio.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;


};
struct Node * createNode(int x)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=x;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void preorder(struct Node *root)
{
    struct Node *ptr;
    ptr=root;
    if(ptr==NULL)
        return;

    else
    {

      printf("%d  ",ptr->data);
      preorder(ptr->left);
      preorder(ptr->right);
    }

}
void postorder(struct Node *root)
{

       struct Node *ptr;
    ptr=root;
    if(ptr==NULL)
        return;

    else
    {

      postorder(ptr->left);
      postorder(root->right);
      printf("%d ",ptr->data);
    }

}
void inorder(struct Node *root)
{

      struct Node *ptr;
    ptr=root;
    if(ptr==NULL)
        return;

    else
    {

      inorder(ptr->left);
      printf("%d ",ptr->data);
      inorder(root->right);

    }
}
int main()
{
  struct Node *root=createNode(10);

  root->left=createNode(20);
  root->right=createNode(30);
  root->left->left=createNode(40);
  root->left->right=createNode(50);
  root->right->left=createNode(60);
  root->right->right=createNode(70);
  printf("\nThe preorder is.\n");
  preorder(root);
  printf("\nThe inorder is.\n");
  inorder(root);
  printf("\nThe postorder is.\n");
  postorder(root);
  return 0;
}
