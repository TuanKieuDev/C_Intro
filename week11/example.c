#include <stdio.h>


void nhap(int arr[], int n){
  int i;
  for(i=0;i<n;i++){
    printf("arr[%d] = ",i);
    scanf("%d",&arr[i]);
  }
}

void xuat(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
     printf("%d ", arr[i]);
  }
}
 

int main(void)
{
  int arr[100],n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    do{
      printf("Menu\n");
      
    }
   
    
    return 0;
}
