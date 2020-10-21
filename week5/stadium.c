#include <stdio.h>

int main()
{
  float a,b,c;
  printf("Enter sold ticket class A:");
  scanf("%f",&a);
  printf("Enter sold ticket class B:");
  scanf("%f",&b);
  printf("Enter sold ticket class C:");
  scanf("%f",&c);
  printf("The amount of income: %.2f",15*a+12*b+9*c);
  printf("\nThe final amount of money: %.2f\n",0.95*(15*a+12*b+9*c));
  return 0;
}
  
