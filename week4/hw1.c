#include<stdio.h>
#include<string.h>
int main()
{
  char name[30],program[20],status[20];
  int promotion,day,month,year;
    printf("Enter name: ");
    fgets(name,30,stdin);
    printf("Enter program: ");
    scanf("%s",program);
    printf("Enter promotion: ");
    scanf("%d",&promotion);
    printf("Enter status: ");
    scanf("%s",status);
    printf("Enter date (day, month, year): \n");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n%-30s: %s","Student Name", name);
    printf("%-30s: %s","Program", program);
    printf("\n%-30s: %d","Promotion", promotion);
    printf("\n%-30s: %s","Status", status);
    printf("\n%-30s: %02d/%02d/%d\n","At", day,month,year);
    return 0;
}
