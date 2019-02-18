#include<stdio.h>
#define MAX 100
void middleLayer(int a[][MAX],int n)
{
    int i,j,sum_row=0;
    int sum_col=0;
    for(i=0;i<n;i++)
        sum_row=sum_row+a[n/2][i];
    for(j=0;j<n;j++)
        sum_col=sum_col+a[j][n/2];
    printf("The Sum of Rows is:%d",sum_row);
    printf("the Sum of Columns is:%d",sum_col);
}
int main()
{
     int mat[][MAX]={
      {54,78,90},
      {90,150,100},
      {100,876,500}
     };
     middleLayer(mat,3);



 return 0;
}

