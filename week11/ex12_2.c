#include <stdio.h>

int main(){
  int a[7]={13,-355,235,47,67,943,1222};
  int *p;
  int i;
  for(i=0;i<5;i++){
    p=&a[i];
    printf("Address of a[%d] is %x\n",i,*p);
  }
  return 0;
}
