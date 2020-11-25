#include <stdio.h>

int isLeapYear(int n){
  if(n%4==0){
    if(n%100==0&&n%400!=0) return 0;
    else return 1;
  }
  else return 0;
}

void dayOfMonth(int n, int m){
  if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) printf("Thang %d co 31 ngay\n",m);
  else if(m==4||m==6||m==9||m==11) printf("Thang %d co 30 ngay\n",m);
  else if(m==2){
    if(isLeapYear(n)) printf("Thang 2 co 29 ngay\n");
    else printf("Thang 2 co 28 ngay\n");
  }
  else printf("Not valid month\n");
}

void hospitalFee(int day,long pill,long  operation,int baohiem, double bill,char name[]){
  float p;
  if(baohiem==1){p=0.3; bill*=0.3;}
  else if(baohiem==2){p=0.5; bill*=0.5;}
  else if(baohiem==3){p=0.7; bill*=0.7;}
      else printf("Not valid");
      printf("CHUONG TRINH TINH VIEN PHI\n");
      printf("Ten benh nhan: %s\n",name);
      printf("So ngay nam vien: %d\n",day);
      printf("So tien thuoc: %ld\n",pill);
      printf("So tien phau thuat: %ld\n",operation);
      if(baohiem==1) printf("Loai bao hiem: Gold\n");
      else if(baohiem==2) printf("Loai bao hiem: Silver\n");
      else if(baohiem==3) printf("Loai bao hiem: Citizen\n");
      printf("Tong tien can thanh toan: (%d*15000 + %ld + %ld) * %.2f = %.2lf\n",day,pill,operation,p,bill);
}

float celcius(float F){
  return 1.0*5/9*(F-32);
}

void tableCelcius(float a, int h, int s){
  int i,j;
  for(int i=1;i<=48;i++) printf("-");
  printf("\n");
  printf("| Fahrenheit temperature | Celcius temperature |\n");
  while(a<=h){
    printf("|%24f|%21f|\n",a,celcius(a));
    a+=s;
  }
  for(int i=1;i<=48;i++) printf("-");
  printf("\n");
}


int main()
{
  int choice;
  do{
    printf("1.Ex1\n");
    printf("2.Ex2\n");
    printf("3.Ex3\n");
    printf("4.Exit\n");
    printf("Nhap lua chon: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:;
      int n,m;
      printf("Enter year: ");
      scanf("%d",&n);
      printf("Enter month: ");
      scanf("%d",&m);
      if(isLeapYear(n)) printf("%d is leap year\n",n);
      else printf("%d is not a leap year\n",n);
      dayOfMonth(n,m);
      break;
    case 2:;
      int day,baohiem;
      long pill,operation;
      char name[30];
      char abc;
       while((getchar())!='\n');
      printf("Nhap ten: ");
      //scanf("%s",name);
      gets(name);
      printf("Nhap so ngay nam vien: ");
      //while((getchar())!='\n');
      scanf("%d",&day);
      printf("Nhap tien thuoc: ");
      scanf("%ld",&pill);
      printf("Nhap so tien phau thuat(neu khong phau thuat nhap 0): ");
      scanf("%ld",&operation);
      double bill = day*15000 + pill + operation;
      printf("Cac loai bao hiem cua ban\n");
      printf("1.Gold\n");
      printf("2.Silver\n");
      printf("3.Citizen\n");
      printf("Chon loai bao hiem cua ban: ");
      scanf("%d",&baohiem);
      hospitalFee(day,pill,operation,baohiem,bill,name);
      break;
    case 3:;
      float F,a;
      int h,s;
      printf("Enter Fahrenheit degree: ");
      scanf("%f",&F);
      printf("Celcius degree: %f\n",celcius(F));
      printf("\nEnter a: ");
      scanf("%f",&a);
      printf("Enter h: ");
      scanf("%d",&h);
      printf("Enter s: ");
      scanf("%d",&s);
      tableCelcius(a,h,s);
      break;
    default:
      printf("Not valid case\n");break;
    }
    
  }while(choice!=4);
  return 0;
}
