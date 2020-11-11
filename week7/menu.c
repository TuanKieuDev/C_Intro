#include<stdio.h>
#include<string.h>
#define NOITRU 150000
#define G 0.3
#define S 0.5
#define C 0.7
int main()
{
  int nguoi=0, theG=0 , theS=0 , theC=0,i;
  int phi,noiTru,thuoc,ngay, phauThuat,tong;
  char ten[100], bh;

  for(i=1;i!=0;){
  printf("\n\tHoa don thanh toan vien phi\n");
   printf("Ten benh nhan: ");
  fflush(stdin);
  gets(ten);
  printf("Benh nhan co bao hiem y te loai ( Gold(G),Silver(S),Citizen(C)) : ");
  scanf("%c",&bh); 
 
  printf("So ngay nam vien: ");
  scanf("%d",&ngay);

  printf("\tChi phi benh vien cua benh nhan :\n ");
  noiTru = ngay*NOITRU;
  printf("Phi noi tru: %d * %d= %d \n", ngay,NOITRU, noiTru);
  printf("Tien thuoc: ");
  scanf("%d",&thuoc);
  printf("Tien phau thuat (neu khong co dien 0): ");
  scanf("%d",&phauThuat);
  fflush(stdin);
  tong= noiTru+ thuoc + phauThuat;
  printf("Tong so tien(chua tinh bao hiem y te): %d+%d+%d=%d\n",noiTru,thuoc,phauThuat,tong); 

  switch(bh)
  {
  case 'G':case 'g':
    printf("Chi phi phai tra la %d*%.1f=%.f\n",tong,G,(float)tong*G);
    theG++;
    break;
  case 'S':case 's':
    printf("Chi phi phai tra la %d*%.1f=%.f\n",tong,S,(float)tong*S);
    theS++;
    break;
  case 'C':case 'c':
    printf("Chi phi phai tra la %d*%.1f=%.f\n",tong,C,(float)tong*C);
    theC++;
    break;
  default:
    printf("Ban da nhap sai loai bao hiem.Nhap lai!\n");
    break;
  }
  nguoi++;
  printf("Ban muon nhap nguoi tiep theo khong?Co (1), khong(0): "); scanf("%d",&i);
  
  }

  printf("\nTong so benh nhan la: %d\n",nguoi);
  printf("So the cac loai la: %d G , %d S, %d C\n",theG,theS,theC);
  
  return 0;
}
    
