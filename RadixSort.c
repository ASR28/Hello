#include<stdio.h>
void sort(int array[],int n)
{
    int buck[10][5];int bucket[10];
    int div=1,count=0,large=0;
     for(int i=0;i<n;i++)
        if(array[i]>large)
        large=array[i];
     while(large)
     {
         count=count+1;
         large/=10;
     }
      int l=0;
     for(int pass=0;pass<count;pass++)
     {
         //Intialize the bucket with Zero.
         for(int i=0;i<10;i++)
            bucket[i]=0;

        for(int i=0;i<n;i++)
        {
            l=((array[i]/div)%10);
            buck[l][bucket[l]++]=array[i];
        }
        int i=0;
         for(int k=0;k<10;k++)
            for(int j=0;j<bucket[k];j++)
               array[i++]=buck[k][j];

          div=div*10;
     }

}
void display(int a[],int num)
{
    printf("The Array is.\n");
    for(int i=0;i<num;i++)
        printf("%d   ",a[i]);
        printf("\n");
}
int main()
{
     int list[20];
     int n;
     printf("Enter the Number of elements in the Array.");
     scanf("%d",&n);
     printf("Enter the Array.");
     for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
     sort(list,n);
     display(list,n);
    return(0);
}

