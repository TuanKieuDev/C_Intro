#include <stdio.h>

void nhap(int *a,int n){
  int i;
  for(i=0;i<n;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }
}

void rightRotate(int *a, int *b, int n, int k){
  int i;
  for(i=0;i<n;i++){
    if(i+k<n){
      b[i+k]=a[i];
    }
    else{
      b[i+k-n]=a[i];
    }
  }
  for(i=0;i<n;i++){
    printf("%5d",b[i]);
  }
}

void leftRotate(int *a, int *b, int n, int k){
  int i;
  for(i=0;i<n;i++){
    if(i+k<n){
      b[i]=a[i+k];
    }
    else{
      b[i]=a[i+k-n];
    }
  }
  for(i=0;i<n;i++){
    printf("%5d",b[i]);
  }
}

int main()
{
  int a[100],b[100];
  int n,k;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  do{
    printf("Enter the time rotate: ");
    scanf("%d",&k);
  }while(k>=n);
  nhap(a,n);
  //rightRotate(a,b,n,k);
  leftRotate(a,b,n,k);
  printf("\n");
  return 0;
}
