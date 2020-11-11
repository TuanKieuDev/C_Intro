#include<stdio.h>
int main()
{
  int i,count=0;
  char ch;
  for(i=128;i<=255;i++)
    {
      count++;
      printf("%d%2c  ",i,ch);
      ch++;
      if(count%8==0)
	printf("\n");
    }
  
  return 0;
}
