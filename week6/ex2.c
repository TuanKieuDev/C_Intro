#include <stdio.h>

int main()
{
  char a,b,c,d;
  printf("Enter a,b,c: ");
  scanf("%c%c%c",&a,&b,&c);
  d =(a<b)?a:b;
  d =(d<c)?d:c;
  printf("The first character is: %c\n",d);
  return 0;
}
