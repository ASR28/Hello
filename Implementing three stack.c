# include<stdio.h>
#define MAX 12
#define MID (-1+MAX/2)
int array[MAX];
int First=0;
int Last=MAX;
int value;
int top1=0;
int top2=MID-1;
int top3=MAX;
int isfull1()
{
    if(top1==(MID-1))
        return 1;
    else
        return 0;
}
int isfull2()
{
if(top2>=((2*((MID-1)))))
  return 1;
  else
    return 0;
}
int isfull3()
{
    if(top3==((2*(MID-1))))
        return 1;
    else
        return 0;
}
void push1(int num1)
{
    if(isfull1())
        printf("Stack is full\n");
    else
    {
      array[top1++]=num1;
    }

}
void push2(int num2)
{
    if(isfull2())
        printf("Stack 2 is full.\n");
    else
    {
        array[top2]=num2;
        top2=top2+1;
    }

}
void push3(int num3)
{
    if(isfull3())
       printf("Stack 3 is full\n");
     else
    {
        top3=top3-1;
        array[top3]=num3;
    }
}

int isempty1()
{
    if(top1==0)
        return 1;
    else
        return 0;
}
int isempty3()
{
    if(top3==(Last))
        return 1;
    else
        return 0;
}
int isempty2()
{
    if(top2==((MID-1)))
       return 1;
    else
        return 0;

}
void pop1()
{
    int x;
    if(isempty1())
        printf("Stack 1 is empty.\n");
   else
   {
       x=array[--top1];
       printf("%d is deleted.\n",x);

   }
}

void pop2()
{
    int x;
    if(isempty2())
        printf("Stack 2 is empty.\n");
    else
    {
        x=array[--top2];
        printf("\n%d is deleted.\n",x);
    }
}
void pop3()
{
   int x;
  if(isempty3())
     printf("Stack 3 is empty.");
  else
  {
      x=array[top3++];
      printf("%d is deleted.\n",x);
  }

}
void traverse()
{
    int i,j,k;
    printf("The Stack 1 is.\n");
    for(i=0;i<top1;i++)
    printf("%d ",array[i]);
        printf("\n");
    printf("The Stack 2 is.\n");
    for(j=MID-1;j<top2;j++)
    printf("%d ",array[j]);
       printf("\n");
    printf("The Stack 3 is.\n");
    for(k=MAX-1;k>=top3;k--)
        printf("%d ",array[k]);
      printf("\n");
}
int main()
{

    int num1,num2,num3,ch,choice=1;
     while(choice)
     {
     printf("1.Push in  stack 1.\n");
     printf("2.Push in  stack 2.\n");
     printf("3.Push in  stack 3.\n");
     printf("4.Transverse the Stack\n");
     printf("5.Pop from stack 1.\n");
     printf("6.Pop from stack 2.\n");
     printf("7.pop from Stack 3.\n");
     printf("Enter the Choices");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("Enter the number.");
                scanf("%d",&num1);
                push1(num1);
                break;

         case 2:printf("Enter the number.");
                scanf("%d",&num2);
                push2(num2);
                break;

         case 3:printf("Enter the number.");
                scanf("%d",&num3);
                push3(num3);
                break;

          case 4:traverse();              break;
          case 5:pop1();
                 break;
          case 6: pop2();
                  break;
          case 7: pop3();
                  break;

     }
     printf("\nDo you wanna to continue.");
     scanf("%d",&choice);
     }
    return 0;
}
