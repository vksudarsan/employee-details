#include<stdio.h>
struct employee
{
    int age,salary,phn;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as  name , age , salary, phonenumber\n");
    for(i=0;i<n;i++)
    {
        scanf(" %s %d %d %d",emp[i].name,&emp[i].age,&emp[i].salary,&emp[i].phn);
    }
    printf("\nEMP_NAME\tEMP_AGE\t\tEMP_SAL\t\EMP_PHNn");
    for(i=0;i<n;i++)
    {
        printf("\t\t%s\t\t%d\t\t%d\\t\t%d\n",emp[i].name,emp[i].age,emp[i].salary,emp[i].phn);
    }
}
