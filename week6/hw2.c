#include<stdio.h>
#define NOITRU 150000
int main ()
{
  char name[15];
  int d,f;
  double a, b, t;
  char ch;
  printf("Nhap ten benh nhan: ");
  fgets(name,15,stdin);
  printf("So ngay nam vien: ");
  scanf("%d", &d);
  printf("Tien thuoc la: ");
  scanf("%lf", &a);
  printf("Chi phi phau thuat la: ");
  scanf("%lf", &b);
  char temp;
  printf("Loai the la (G/S/C):");
  scanf("%c", &temp);
  scanf("%c", &ch);
  printf("C day %c\n", ch);
  t=d*NOITRU+a+b;
  if (ch=='G')
    f=30;
  else if (ch=='S')
    f=50;
  else f=70;
  printf("HOA DON THANH TOAN TIEN VIEN PHI\n");
  printf("Benh nhan: %s", name);
  printf("Phi noi tru:%d*%d= %.3d VND\n", d, NOITRU, d*NOITRU);
  printf("Phi thuoc: %.3lf VND\n", a);
  printf("Phi phau thuat: %.3lf VND\n", b);
  printf("Tong tien: %.3d+%.3lf+%.3lf=%.3lf VND\n", d*NOITRU, a, b,t);
  printf("Bao hiem y te chi tra %d %%: %.3lfx%d %%=%.3lf VND\n", 100-f, t, 100-f, t*(100-f)*0.01);
  printf("So tien benh nhan phai tra: %.3lf-%.3lf=%.3lf VND\n", t, t*(100-f)*0.01, t*f*0.01);
}
