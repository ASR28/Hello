#include<stdio.h>
#define MAX 10
int array[MAX];
int array2[MAX];
int top=-1;
int top2=-1;
isempty()
{
    if(top==-1)
        return 1;
    return 0;

}
isempty2()
{
        if(top2==-1)
        return 1;
    return 0;


}
isfull()
{
    if(top==MAX-1)
        return 1;
    return 0;
}
isfull2()
{
           if(top2==MAX-1)
              return 1;
    return 0;
 }
void push(int x)
{
    if(isfull())
        printf("Stack is full.\n");
    else
        array[++top]=x;

}
void pop()
{
    if(isempty())
        printf("Stack is empty.\n");
    else
        {

        for( int i=top;i>=0;i--)
        {
            top2=top2+1;
            array2[top2]=array[i];

        }
    }
}
void display1()
{
     if(isempty())
       printf("The Stack Has No element to display.");
     else
     {


    printf("The Array is.\n");
    for(int i=0;i<=top;i++)
        printf("%d  ",array[i]);
     }
}
void display2()
{
    if(isempty2())
       printf("The Stack Has No element to display.");
     else
     {


    printf("\nThe Reverse Array is.\n");
    for(int i=0;i<=top2;i++)
        printf("%d  ",array2[i]);

     }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    pop();
    display1();
    display2();
    return 0;

}
