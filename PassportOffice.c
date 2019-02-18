#include<stdio.h>
#include<conio.h>
#define MAX 5
struct Passport
{
    int p_id;
    char Name[30];
    char address[30];
    int age;
    int date_of_renewal;
}p1[MAX];
struct Passport enterdata(struct  Passport p2)
{
    printf("Enter the Passport Id.");
    scanf("%d",&p2.p_id);
    printf("Enter the Name:");
    scanf("%s",p2.Name);
    printf("Enter the Age:");
    scanf("%d",&p2.age);
    printf("Enter the Address:");
    scanf("%s",p2.address);
    printf("Enter the Date of entry.");
    scanf("%d",&p2.date_of_renewal);
    return p2;
    }

void printData(struct Passport p1)
{
    printf("The Passport Id is:%d\n",p1.p_id);
    printf("The Name is:%s\n",p1.Name);
    printf("The Age is:%d\n",p1.age);
    printf("The address is:%s\n",p1.address);
    printf("The Date of Entry:%d\n",p1.date_of_renewal);
}

void insertUsingSort()
{
     int flag=1;


      struct Passport temp;
      for(int i=0;i<5;i++)
      {

         p1[i]=enterdata(p1[i]);
          int key=i;
          int j=i;
         while( j>0&& p1[key].p_id<p1[j-1].p_id)
          {
            temp=p1[key];
            p1[key]=p1[j-1];
            p1[j-1]=temp;
             j--;
          }
       }


}
void selectionsort()
{
    struct Passport s1;
    for(int i=0;i<MAX-1;i++)
        for(int j=i+1;j<MAX;j++)
    {
        s1=p1[i];
        p1[i]=p1[j];
        p1[j]=s1;
    }

}

int main()
{
    printf(" Enter the Details. \n");
    insertUsingSort();
    printf("The Details are:\n");
    for(int i=0;i<5;i++)
        printData(p1[i]);
    selectionsort();
    return 0;

}
