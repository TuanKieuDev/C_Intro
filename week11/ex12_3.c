#include <stdio.h>

int main(){
  int a,b,c;
  int *p;
  printf("Enter the value of a, b, c: ");
  scanf("%d %d %d",&a,&b,&c);
  p=&a;
  *p+=100;

  p=&b;
  *p+=100;

  p=&c;
  *p+=100;
 
  printf("Once again: %d %d %d\n",a,b,c);
  return 0;
}
