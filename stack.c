#include<stdio.h>
#define MAX 10
int array[MAX];
int top=MAX/2;
void enter()
{
    int i;
    printf("Enter the Array.");
    for( i=0;i<MAX;i++)
        scanf("%d",&array[i]);

}
void print()
{
    int i;
    printf("THE STACK 1 IS:");
    for(i=0;i<top;i++)
        printf("%d  ",array[i]);
     printf("\n");
    printf("THE STACK 2 IS:");
    for(i=MAX-1;i>=top;i--)
      printf("%d",array[i]);
   printf("\n");
}
int main()
{
    enter();
    print();
    return 0;
}







