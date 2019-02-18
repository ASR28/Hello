#include<stdio.h>
int factorial(int);
int fabonacci (int);
int factorial( int number)
{
    if(number==0||number==1)
        return 1;
    else
        return number*factorial(number-1);
}
int fabonacci(int number)
{
    if(number==0)
        return 0;
    else if(number==1)
        return 1;
    else
        return fabonacci(number-1)+fabonacci(number-2);
}

int main()
{
    int num,res,i;
    int ch,choice;
    printf("Enter the Number.\n");
    scanf("%d",&num);
    printf("1.Factorial of a number");
    printf("2.Fabonacci series\n");
    printf("Enter the Choice.");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:res=factorial(num);
               printf("The Result is.%d",res);
               break;
        case 2:for(i=0;i<num;i++)
            printf("%d  ",fabonacci(i));
        case 3: break;
    }

return 0;
}
