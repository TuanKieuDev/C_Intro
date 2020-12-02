#include <stdio.h>

void swap(int *a,int *b, int *c){
  int temp1 = *b;
  int temp2 = *c;
  *b=*a;
  *c=temp1;
  *a=temp2;
}

int main(){
  int a=3,b=4,c=5;
  swap(&a,&b,&c);
  printf("%d %d %d\n",a,b,c);
  return 0;
}
