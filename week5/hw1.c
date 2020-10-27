#include<stdio.h>

int main()
{
  int m,n,sum;
  printf("Ban muon mua bao nhieu IPOD? ");
  scanf("%d",&m);
  printf("Ban muon mua bao nhieu IPAD? ");
  scanf("%d",&n);
  sum = 148*m + 288*n;
  printf("SIEU THI TOPCARE - HOA DON THANH TOAN\n");
  printf("Ipod\t%dx148=%d\n",m,m*148);
  printf("Ipad\t%dx288=%d\n",n,n*288);
  printf("Net \t\t%d\n",sum);
  printf("Discount = %.1lf\n",1.0*sum/10);
  printf("You pay: %d - %.1lf = ...\n",sum,1.0*sum/10);
  return 0;
}
