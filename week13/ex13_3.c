#include <stdio.h>
#include <string.h>

int validInput(char str[]){
  int i;
  for(i=0;i<3;i++){
    if(!isalpha(str[i])) return 0;
  }
  for(i=3;i<7;i++){
    if(!isdigit(str[i])) return 0;
  }
  return 1;
}

int main()
{
  char str[] = "Hel200m";
  if(validInput(str)==1) printf("Valid\n");
  else printf("Invalid\n");
  return 0;
}
