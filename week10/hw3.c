#include <stdio.h>

int main()
{
  int A[5][3]={{1,1,0},
	       {0,0,0},
	       {1,1,1},
	       {1,1,1},
	       {1,0,1}};
  int choice;
  do{
    printf("Menu\n");
    printf("1. Turn on/off by row\n");
    printf("2. Turn on/off by column\n");
    printf("3. Turn on/off by position\n");
    printf("4. Current capacity\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:;
      int choice2,turn1,i,j,sum1=0;
      do{
	printf("Enter the row: ");
	scanf("%d",&choice2);
      }while(choice2<1||choice2>5);
      printf("Press 1 if you want to turn on or 0 if you want to turn off: ");
      scanf("%d",&turn1);
      for(i=1;i<=3;i++){
      if(turn1==0){
	A[choice2-1][i-1]=0;
      }
      if(turn1==1){
	A[choice2-1][i-1]=1;
      }
      }
      for(i=0;i<5;i++){
	printf("\n");
	for(j=0;j<3;j++){
	   printf("%d", A[i][j]);
	   if((i+1)%2==0&&(j+1)%2==0) sum1+=A[i][j]*20;
	   else if((i+1)%2!=0&&(j+1)%2!=0) sum1+=A[i][j]*10;
	   else sum1+=A[i][j]*15;
	}
      }
      printf("\nCurrent capacity: %d W",sum1);
      printf("\n");
      break;
      case 2:;
	int choice3,turn2,sum2=0;
      do{
	printf("Enter the column: ");
	scanf("%d",&choice3);
      }while(choice3<1||choice2>3);
      printf("Press 1 if you want to turn on or 0 if you want to turn off: ");
      scanf("%d",&turn2);
      for(j=1;j<=5;j++){
      if(turn2==0){
	A[j-1][choice3-1]=0;
      }
      if(turn2==1){
	A[j-1][choice3-1]=1;
      }
      }
      for(i=0;i<5;i++){
	printf("\n");
	for(j=0;j<3;j++){
	   printf("%d", A[i][j]);
	   if((i+1)%2==0&&(j+1)%2==0) sum2+=A[i][j]*20;
	   else if((i+1)%2!=0&&(j+1)%2!=0) sum2+=A[i][j]*10;
	   else sum2+=A[i][j]*15;
	}
      }
      printf("\nCurrent capacity: %d W",sum2);
      printf("\n");
      break;
      case 3:;
	int choice4,choice5,turn3,sum3=0;
	printf("Enter the row: ");
	scanf("%d",&choice4);
	printf("Enter the column: ");
	scanf("%d",&choice5);
	printf("Press 1 if you want to turn on or 0 if you want to turn off: ");
	scanf("%d",&turn3);
	A[choice4-1][choice5-1]=turn3;
	for(i=0;i<5;i++){
	printf("\n");
	for(j=0;j<3;j++){
	   printf("%d", A[i][j]);
	   if((i+1)%2==0&&(j+1)%2==0) sum3+=A[i][j]*20;
	   else if((i+1)%2!=0&&(j+1)%2!=0) sum3+=A[i][j]*10;
	   else sum3+=A[i][j]*15;
	}
      }
      printf("\nCurrent capacity: %d W",sum3);
      printf("\n");
      break;
    case 4:;
      int sum=0;
      for(i=0;i<5;i++){
	printf("\n");
	for(j=0;j<3;j++){
	   printf("%d", A[i][j]);
	   if((i+1)%2==0&&(j+1)%2==0) sum+=A[i][j]*20;
	   else if((i+1)%2!=0&&(j+1)%2!=0) sum+=A[i][j]*10;
	   else sum+=A[i][j]*15;
	}
      }
      printf("\nCurrent capacity: %d W",sum);
      printf("\n");
    default:
      printf("Not valid\n");
    }
  }while(choice!=5);
  return 0;
  }
