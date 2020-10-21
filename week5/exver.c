#include <stdio.h>

int main()
{
  int price = 20000;
  float d,pro = 0.08;
  printf("Enter the distance (km): ");
  scanf("%f",&d);
  printf("\nThe fuel amount: %.2lf",d*1000*pro);
  printf("\nThe cost: %.2lf\n",d*1000*pro*price);
  return 0;
}
