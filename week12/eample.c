#include <stdio.h>

int main(){
  int a[3] = {17,289,4913}, *p, *q;
  p = a; /* p points to the beginning of a, that is &a[0] */
  q = p+2; /* q points to a[2]. Equivalent to q = &a[2] */
  printf(“a is %p\n", a);
  printf("p is %p, q is %p\n", p, q);
  printf("p points to %d and q points to %d\n", *p, *q);
  printf("The pointer distance between p and q is %d\n", q-p);
  printf("The integer distance between p and q is %d\n",(int)q-(int)p);
  return 0;
}
