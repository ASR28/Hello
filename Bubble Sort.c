#include<stdio.h>
void bubbleSort(int a[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
       for(int j=0;j<(n-1)-i;j++)
                                                   if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
}

int main()
{
    int a[20],n;
    printf("Enter the element you want to insert.");
    scanf("%d",&n);
    printf("Enter the Array.\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The Entered Array is.\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    bubbleSort(a,n);
    printf("\nThe Sorted Array is.\n");
    for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0;


}
