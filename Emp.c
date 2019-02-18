# include<stdio.h>
# define MAX 5
struct Employee
{
    int e_id;
    char e_name[30];
    int e_sal;

}s1[MAX];
void EnterData()
{
    for(int i=0;i<MAX;i++)
   {
    printf("Enter the Employee_id:");
    scanf("%d",&s1[i].e_id);
    printf("Enter the Employee Name:");
    scanf("%s",s1[i].e_name);
    printf("Enter the Salary:");
    scanf("%d",&s1[i].e_sal);
   }
}

int  Binary_Search()
{
    int mid,first,last,data,count=0,flag=0;
    first=0;
    last=MAX-1;
    printf("Enter the Employee you waana to search");
    scanf("%d",&data);
    while(first<=last)
    {

        mid=(first+last)/2;
        count=count+1;
        if(s1[mid].e_id==data)
        {
         flag=1;
         printf("\n\t The Details are:\t\n");
         printf("The Employee id is:%d\n",s1[mid].e_id);
         printf("The Employee Name is:%s\n",s1[mid].e_name);
         printf("The Salary is:%d\n",s1[mid].e_sal);
         printf("The Count is:%d",count);
          return;
        }
       else if(s1[mid].e_id<data)
            first=mid+1;
       else
       {
           last=mid-1;
       }
    }
    return flag;
}
int main()
{
    int flag;
    EnterData();
    flag=Binary_Search();
    if (flag)
        printf("The Record is found.\n");
    else
        printf("The Record is not Found.\n");
    return(0);
}
