#include <stdio.h>
#define tulanh 8
#define tivi 15
#define laptop 12

int main()
{
  int a,b,c,min1,max1,min2,max2;
  printf("Nhap vao so tu lanh ban: ");
  scanf("%d",&a);
  printf("Nhap vao so tivi ban: ");
  scanf("%d",&b);
  printf("Nhap vao so laptop ban: ");
  scanf("%d",&c);
  printf("Doanh so tu lanh: %d",tulanh*a);
  printf("\nDoanh so tivi: %d",tivi*b);
  printf("\nDoanh so laptop: %d",laptop*c);
  printf("\nTong doanh so: %d",tulanh*a+tivi*b+laptop*c);
  max1 = (a>b?a:b)>c?(a>b?a:b):c;
  min1 = (a<b?a:b)<c?(a<b?a:b):c;
  max2 = (a*8>b*15?a*8:b*15)>c*12?(a*8>b*15?a*8:b*15):c*12;
  min2 = (a*8<b*15?a*8:b*15)<c*12?(a*8<b*15?a*8:b*15):c*12;
  printf("\nMat hang ban chay nhat: %d",max1);
  printf("\nMat hang ban e nhat: %d\n",min1);
  printf("\nMat hang doanh so cao nhat: %d",max2);
  printf("\nMat hang doanh so thap nhat: %d\n",min2);
  return 0;
}
  
