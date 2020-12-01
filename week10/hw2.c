#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int A[10][4];
  int choice;
  int i,j;
  for(i=0;i<10;i++){
    for(j=0;j<4;j++){
      A[i][j]= rand()%2;
    }
  }
  do{
    printf("Menu\n");
    printf("1. Use\n");
    printf("2. Leave\n");
    printf("3. Status\n");
    printf("4. Electricity and price\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:;
      int r1,c1;
      printf("Enter the position of computer that you want to use\n");
      printf("Row: ");
      scanf("%d",&r1);
      printf("Column: ");
      scanf("%d",&c1);
      (A[r1-1][c1-1]==1)?printf("You can't use\n"):printf("You can use\n");
      break;
    case 2:;
      int r2,c2;
      printf("Enter the position of computer that you want to leave\n");
      printf("Row: ");
      scanf("%d",&r2);
      printf("Column: ");
      scanf("%d",&c2);
      A[r2-1][c2-1]==0;
      break;
    case 3:;
      printf("1 is used and 0 is empty\n");
      for(i=0;i<10;i++){
	printf("\n");
	for(j=0;j<4;j++){
	  printf("%5d",A[i][j]);
	}
      }
      printf("\n");
      break;
    case 4:;
      int sum=0;
	float price=0;
       for(i=0;i<10;i++){
	for(j=0;j<4;j++){
	  sum+=400*A[i][j];
	}
      }
       printf("Total used: %d\n",sum);
       
       printf("Total price: %f\n",1.0*sum*0.75);
      break;
    default:
      printf("Not valid\n");
    }
  }while(choice!=5);
  return 0;
}
