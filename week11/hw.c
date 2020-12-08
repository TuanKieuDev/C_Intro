#include <stdio.h>
#include <math.h>

int reverseInt(int *a){
  int count,i=1,result=0;
  while(*a>pow(10,i)){
    i++;
  }
  do{
    count=*a%10;
    result=count*pow(10,i-1)+result;
    *a=(*a-count)/10;
    i--;
  }while(*a>=1);
  return result;
}

int main(){
  int a,i,m=1,n=1,d;
  printf("Nhap so can chuyen: ");
  scanf("%d",&a);
  while(a>pow(10,n)){
    n=n+1;
  }
  d=reverseInt(&a);
  while(d>pow(10,m)){
    m++;
  }
  printf("Ket qua: ");
  if(n-m>0){
    for(i=1;i<=(n-m);i++)
      printf("%d",0);
  }
  printf("%d\n",d);
  return 0;
}
