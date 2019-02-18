#include<stdio.h>
int main()
{
    int a[10];
    int n,temp=0;
    printf("Enter the Size of Array.");
    scanf("%d",&n);
    printf("Enter the Array.");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
    }

    printf("The Array is.\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

  return 0;
}
