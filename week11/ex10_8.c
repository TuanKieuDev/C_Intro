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
 
void reverse(int arr[], int n){
  int low,high;
   for (low = 0, high = n - 1; low < high; low++, high--)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
} 
int main(void)
{
  int arr[100],n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    nhap(arr,n);
    xuat(arr,n);
    reverse(arr, n);
    printf("\n");
    xuat(arr, n);
    printf("\n");
    return 0;
}
