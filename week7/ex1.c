#include <stdio.h>

int main()
{
  int count;
  char c;
  for(count=0;c=getchar()!='.';count++){
      c = getchar();
    }
	printf("Number of characters is %d\n",count);
}
