#include <stdio.h>

int main(){
  int a[1000];
    int i,n;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
      printf("a[%d] = ",i);
      scanf("%d",&a[i]);
      
    }

    for(int i = 1; i < n -1;i++){
      if(a[i]>=a[i-1]&&a[i]>=a[i+1]) sum+=a[i];
    }

    printf("Sum of local maximum numbers: %d\n",sum);
    return 0;



}
