#include <stdio.h>
#include <math.h>
int main()
{
  char name[30];
  long tien;
  float lainam;
  int thang;
  printf("moi nhap ten: ");
  fgets(name,30,stdin);
  printf("nhap so tien: ");
  scanf("%ld",&tien);
  printf("nhap lai suat hang nam: ");
  scanf("%f",&lainam);
  float laithang=lainam/1200;
  printf("nhap so thang gui:");
  scanf("%d",&thang);
  printf("Tai khoan: %s\n",name);
  printf("%-10s %-20s %-15s %-20s",'Thang','Tien dau ky','Tien lai','So du');
  printf("%-10d %-20ld %-15f %-20f",1,tien,tien*pow(1+laithang,thang)-tien,tien*pow(1+laithang,thang));
  printf("So tien thu duoc sau %d thang la: %f\n",thang,tien*pow(1+laithang,thang));
  return 0;
}
  
