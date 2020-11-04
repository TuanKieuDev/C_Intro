#include <stdio.h>


int main()
{
  float a,b;
  char operand;
  float tol;
  scanf("%f %c %f",&a,&operand,&b);
  switch(operand){
  case '+': tol=a+b;break;
  case '-': tol=a-b;break;
  case '*': tol=a*b;break;
  case '/': tol=a/b;break;
  default: printf("not valid");
  }
  printf("\n%.2f %c %.2f = %.2f\n",a,operand,b,(float)tol);
  return 0;
}
