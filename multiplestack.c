#include<stdio.h>
#define MAX 10
int array[MAX];
int top1,top2;
void push1(int);
void push(int);
void pop1();
void pop2();
void tranverse();
top1=-1;
top2=MAX;
 int mid=MAX/2;
int underflow()
{
    if(top1==-1)
        return 1;
    else
        return 0;


}
int underflow2()
{
    if(top2==MAX)
        return 1;
    else
        return 0;
}
int overflow()
{
    if(top1==mid-1)
        return 1;
    else
        return 0;
}
int overflow2()
{
    if(top2==mid)
        return 1;
    else
        return 0;
}
void push1(int num)
{
 if(overflow())
 {

     printf("stack 1 overflow");
 }

else
{





         top1=top1+1;
         array[top1]=num;


}

}
void pop1()
{
    int x;
    if (underflow())
    {
        printf("Stack 1 has no element.\n");

    }
    else
    {

     x=array[top1];
     top1=top1-1;
     printf("%d is deleted.\n",x);
    }

}
void pop2()
{
    int x;
    if(underflow2())
         {
                   printf("Stack 2 has no element.\n");

         }

    else
    {
             x=array[top2++];
             printf("%d is deleted",x);


    }

}
void push2(int num)
{
    if(overflow2())
    {
      printf("stack 2 overflow.");
    }
    else
    {

        array[--top2]=num;

    }
}
void tranverse()
{
    int i,j;
    printf("Stack 1 is.\n");
    for(i=0;i<=top1;i++)
    printf("%d   ",array[i]);
    printf("\n");
        printf("Stack 2 is.\n");

    for(j=MAX-1;j>=top2;j--)
        printf("%d  ",array[j]);
    printf("\n");
}
int main()
{
    int ch,choice=1;
    int num,num1;
    while(choice)
    {
    printf("1. Enter element in stack 1.\n");
    printf("2. Enter element in stack 2.\n");
    printf("3. Display the elements\n");
    printf("4.Remove the elements from stack 1.\n");
    printf("5.Remove the element from  stack  2.\n");
    printf("Enter the choice.");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter the element");
                scanf("%d",&num);
                push1(num);
                break;
        case 2: printf("Enter the Element.");
                scanf("%d",&num1);
                push2(num1);
                break;

        case 3: tranverse();
                break;

        case 4:pop1();
               break;
        case 5:pop2();
               break;
        case 6:break;
    }
     printf("Do you wanna to continue.");
     scanf("%d",&choice);
   }
    return 0;
}
