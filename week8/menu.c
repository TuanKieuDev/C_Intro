#include <stdio.h>
#define PERIOD '.'
int main()
{
  int choice;
  do{
    printf("Menu\n");
    printf("1. Lab 1 \n");
    printf("2. Lab 2 \n");
    printf("Enter 0 to quit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 0:
      printf("Quit program\n");break;
    case 1:
      printf("Do lab 1\n");
      char c;
      while((c = getchar())!=PERIOD)
	putchar(c);
      printf("\nGood Bye.\n");
      break;
    case 2:
      printf("Do lab 2\n");
      int i=1;
      int sum = 0;
      do{
	sum+=i;
	i++;
      }while(i<=50);
      printf("Sum 50 la: %d\n",sum);
      break;
    default:
      printf("Not valid\n");
    }
  }while(choice!=0);
    return 0;
}
