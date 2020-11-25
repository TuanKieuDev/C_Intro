#include <stdio.h>

int main()
{
  int a[100];
  int i,j;
  long sum=0;
  srand((int)time(0));
  for(int i=0;i<100;i++){
  a[i]= rand()%101;
  printf("%5d",a[i]);
  if((i+1)%10==0) printf("\n");
  }
  printf("\n");

  for(int i=0;i<100;i++){
    if(a[i]%2==0) sum+=a[i];


  }
  printf("\nSum of odd number: %ld\n",sum);

  int min = a[0];
  for(int i=0;i<100;i++){
    if(a[i]<min) min = a[i];
  }

  printf("\nMinimum value: %d\n",min);
  return 0;
}
