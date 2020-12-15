#include <stdio.h>
#include <string.h>

void trimMiddle(char a[]){
  int n = strlen(a);
  int i,j;
  for(i=0;i<n;i++){
    if(a[i]==' ' && a[i+1]==' '){
      for(j=i+1;j<n;j++){
	a[j]=a[j+1];
      }
      i--;
      n--;
    }
  }
}

int main()
{
  char s[50]= "     Kieu   Anh Tuan      .";
  printf("%s\n",s);
  trimMiddle(s);
  printf("%s\n",s);
  return 0;
}
