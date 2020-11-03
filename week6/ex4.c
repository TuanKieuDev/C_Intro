#include <stdio.h>

int main()
{
  int age,day;
  float price;
  printf("Enter an age: ");
  scanf("%d",&age);
  printf("Enter the numberof day: ");
  scanf("%d",&day);
  if(day<0) printf("Not valid");
  else if(day<6) price=7;
  else if(day<8) price=10;
  else printf("Not valid");
  if(age>0)
    {
      printf("\nMovie: Avatar ");
      if(age<18) {
	printf("\nClass: Child\n");
	printf("Date: %d\n",day);
	printf("Price: %.2f\n",price*0.5);
      }
      else if(age>=65) {
	printf("\nClass: Senior Citizen\n");
	printf("Date: %d\n",day);
	printf("Price: %.2f\n",price*0.7);
      }
      else {
	printf("\nClass: Adult\n");
	printf("Date: %d\n",day);
	printf("Price: %.2f\n",price);
      }
    }
  else printf("That's not a valid age\n");
  return 0;
}
