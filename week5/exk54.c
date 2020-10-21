#include <stdio.h>

int main()
{
  float a,b;
  printf("Nhap a, b: ");
  scanf("%f%f",&a,&b);
  printf("%f\n",((a+b)*(a+b)*(a+b))/(a*a+b*b)-a*b);
  return 0;
}
