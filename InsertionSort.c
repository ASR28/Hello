                      #include<stdio.h>
void insertionSort(int array[],int n)
{
   int j=0,temp=0;
   for(int i=1;i<=n-1;i++)
     {
      j=i;
      while(j>0&&array[j-1]>array[j])
      {
          temp=array[j];
          array[j]=array[j-1];
          array[j-1]=temp;
         j=j-1;
      }
     }



}
int main()
{
    int array[5];

   printf("Enter the Array.");
   for(int i=0;i<5;i++)
   scanf("%d",&array[i]);
   printf("The Array Before Sorting is.\n");
   for(int i=0;i<5;i++)
   printf("%d ",array[i]);
   insertionSort(array,5);
   printf("\nThe Array After Sorting is.\n");
   for(int i=0;i<5;i++)
   printf("%d ",array[i]);

}
