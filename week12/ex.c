#include <stdio.h>

void nhap(int *a,int n){
  int i;
  for(i=0;i<n;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }
}

int addNumbers(int *a){
  int i,sum=0;
  for(i=0;i<5;i++, a++){
    sum+=*a;
  }
  return sum;
}

int main()
{
  int a[100];
  nhap(a,5);
  printf("Tong cua 5 so la: %d\n",addNumbers(a));
  return 0;
}
