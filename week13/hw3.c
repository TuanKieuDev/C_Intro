#include <stdio.h>
#include <string.h>

void encode(char s[]){
  int i;
  int n = strlen(s);
  for(i=0;i<n;i++){
    if(s[i]>='y') s[i]=s[i]-24;
    else{
      s[i]=s[i]+2;
    }
  }
}

void decode(char s[]){
  int i;
  int n = strlen(s);
  for(i=0;i<n;i++){
    if(s[i]<='b') s[i] = s[i]+24;
    else{
      s[i]=s[i]-2;
    }
  }
}

int main()
{
  char s[30];
  scanf("%s",s);
  encode(s);
  printf("%s\n",s);
  decode(s);
  printf("%s\n",s);
  return 0;
}
