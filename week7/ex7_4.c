#include <stdio.h>
#include <math.h>

int main()
{
  int i,j;
  int k=0;
  for(i=3;i<=100;i++){
    for(j=2;j<i;j++){
      if(i%j==0)break;
      if(j>sqrt(i)){
	printf("%d\n",i);break;
      }
    }
    
    
  }
  return 0;
}
