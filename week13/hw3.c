#include <stdio.h>
#include <string.h>

void encode(char s[],int k){
  int i;
  int n = strlen(s);
  for(i=0;i<n;i++){
    if(s[i]>='z'-k+1) s[i]=s[i]-26+k;
    else{
      s[i]=s[i]+k;
    }
  }
}

void decode(char s[],int k){
  int i;
  int n = strlen(s);
  for(i=0;i<n;i++){
    if(s[i]<='a'+k-1) s[i] = s[i]+26-k;
    else{
      s[i]=s[i]-k;
    }
  }
}

int main()
{
  char s[30];
  int k;
  scanf("%s",s);
  printf("Nhap so buoc nhay: ");
  scanf("%d",&k);
  encode(s,k);
  printf("Chuoi sau khi ma hoa: %s\n",s);
  /*decode(s,k);
    printf("Chuoi sau khi giai ma:%s\n",s);*/
  return 0;
}
