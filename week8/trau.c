#include <stdio.h>

int main()
{
  int td,tn,tg,ketqua=0;
  for(td=1;td<=20;td++)
    for(tn=1;tn<=(33-td);tn++)
      for(tg=3;tg<=(100-td-tn);tg+=3)
	if(((tg/3)+3*tn+5*td)==100&&(td+tn+tg)==100)
	  {
	    printf("\nTrau dung: %5d; Trau nam: %5d; Trau gia: %5d",td,tn,tg);
	    ketqua++;
	  }
  printf("\nTong cong co %d phuong an",ketqua);
  getchar();
  return 0;
}
