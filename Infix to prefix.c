#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#define MAX 20

void push(int);
char pop();
void in2prefix();
int priority ( char );

char stk[20],infix[20],prefix[20];
int top=-1;


int main()
{
    int cont;
    printf("\n Enter the Infix Expression : ");
    scanf("%s",infix);
    in2prefix();
    return 0;
}

// method that pushes the elements onto the character stack
void push(int pos)
{

    if(top==MAX-1)
    {
        printf("stackfull!!!!");
    }

    else {
        top++;
        stk[top] = infix[pos];
    }
}
// method that removes character from stack and returns them
char pop()
{
    char ch;

    if(top < 0)
    {
        printf("stackempty!!!!");
        exit(0);
    }
    else
    {
        ch=stk[top];
        stk[top]='\0';
        top--;
        return(ch);
    }
    return 0;
}

// method that converts String from infix to prefix
// all the strings are assumed to be valid expressions
void in2prefix()
{
    int i=0,j=0;

    strrev(infix);

    while(infix[i]!='\0')
    {
        // if an alphabet is found then copy it to the output string
        if(infix[i]>='a' && infix[i]<='z')          /*case when alphabet is found*/
        {
            prefix[j]=infix[i];
            j++;
            i++;
        }

        // as we have reversed the string closing bracket will be found first
        // if an closing bracket is found then put it in stack
        else if(infix[i]==')' || infix[i]=='}'  || infix[i]==']')
            {
                push(i);
                i++;
            }

        // as we have reversed the string opening bracket will be found after the closing bracket
        // if an opening bracket is found then
        // keep removing the operators from the stack and add them to prefix string until you find the corresponding opening bracket
        else if(infix[i]=='(' || infix[i]=='{'  || infix[i]=='[')       /*when closing bracket is found*/
        {
            if(infix[i]=='(')
            {
                while(stk[top]!=')')          /*pop till corresponding opening bracket is found*/
                {
                    prefix[j]=pop();
                    j++;
                }
                pop();
                i++;
            }

            else if(infix[i]=='[')
            {
                while(stk[top]!=']')      /*pop till corresponding opening bracket is found*/
                {
                    prefix[j]=pop();
                    j++;
                }
                pop();
                i++;
            }

            else if(infix[i]=='{')
            {
            while(stk[top]!='}')      /*pop till corresponding opening bracket is found*/
                {
                    prefix[j]=pop();
                    j++;
                }
                pop();
                i++;
            }
        }

        // if none of the above cases are satisfied then we surely have an operator
        else
        {
            // if the stack if empty then we simply put the operator in stack
            if(top==-1)
            {
                push(i);
                i++;
            }

            // if the priority of current operator is less than the stack top then
            // pop the stack top and add it to the prefix string
            else if( priority(infix[i]) < priority(stk[top]))
            {
                prefix[j]=pop();
                j++;

                // now if you have an operator that has priority greater than current operator then pop
                while(priority(stk[top]) > priority(infix[i])){
                    prefix[j] = pop();
                    j++;
                    if(top < 0) {
                        break;
                    }
                }
                push(i);
                i++;
            }
            // if the priority of current operator is greater than or equal to the stack top then push it onto the stack
            else if(priority(infix[i]) >= priority(stk[top]))
            {
                push(i);
                i++;
            }
        }
    }

    // at the end remove all the operators from the stack
    while(top!=-1)
    {
        prefix[j]=pop();
        j++;
    }

    // reverse the final string before output
    strrev(prefix);
    strrev(prefix);
    prefix[j]='\0';
    printf("The converted prefix string is : %s ",prefix);
}

// method that returns priority for operators according to their precedence
int priority ( char alpha )
{

    if(alpha == '+' || alpha =='-')
    {
        return(1);
    }

    if(alpha == '*' || alpha =='/')
    {
        return(2);
    }

    if(alpha == '$')
    {
        return(3);
    }
    return 0;
}
