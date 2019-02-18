#include<stdio.h>
void towerOfhanoi(int n,char from,char aux,char to)
{
     if(n==1)
     {
         printf("\nMove disk 1 from %c to %c.\n",from,to);
         return;
     }
      towerOfhanoi(n-1,from,to,aux);
      printf("\n Move disk %d from %c to %c.\n",n,from,to);
      towerOfhanoi(n-1,aux,from,to);

}
int main()
{
    char a,b,c;
    int n;
    printf("Enter the Number of Moves.");
    scanf("%d",&n);

    towerOfhanoi(n,'a','b','c');
    return 0;
}
