#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE_MAX 100
int checkValidNumberPlate(char s[]){
  int count;
  if(strlen(s)!=11) return 0;
  for(count=0;count<2;count++){
    if(!isdigit(s[count])){
      return 0;
    }
  }
  if(s[2]!='-'||s[8]!='.') return 0;
  if(!isalpha(s[3])) return 0;
  for(count=4;count<8;count++){
    if(!isdigit(s[count])){
      return 0;
    }
  }
  if(!isdigit(s[9])||!isdigit(s[10])) return 0;
  return 1;
  
}

int main(){
  char s[SIZE_MAX];
      
    printf("Enter Plate: ");
   
  gets(s);
    if(checkValidNumberPlate(s)){
    printf("Valid\n");
  }
  else{
    printf("Invalid\n");
  }
  
  return 0;
}
