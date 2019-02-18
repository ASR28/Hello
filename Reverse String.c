# include <stdio.h>
struct Node
{
    int data;
    Node *left;
    Node *right;

};
struct Node *root=NULL;
Node * createNode()
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data.");
    scanf("%d",&ptr->data);
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;

}
void Insert()
{


}
