#include<stdio.h>
int main ()
{
	int m,n,p,a,b,c;
	float cost;
	printf("Welcome to BK Library DVD Shop!!\n");
	printf("Please enter the date (DD/MM/YY):\n");
	scanf("%d/%d/%d",&m,&n,&p);
	printf("Enter the number of overnight DVD:\n");
	scanf("%d",&a);
	printf("Enter the number of 3-days DVD::\n");
	scanf("%d",&b);
	printf("Enter the number of weekly DVD:\n");
	scanf("%d",&c);
	printf("Date: %2d/%2d/%4d\n",m,n,p);
	printf("%-30s%20s%d","Number of overnight DVD: ","",a);
	printf("\n%-30s%20s%d","Number of 3-days DVD:","",b);
	printf("\n%-30s%20s%d\n","Number of weekly DVD:","",c);
	printf("Your total cost: %d*7.00+%d*5.00*3+%d*3.00*7=%.2f$",a,b,c,cost=a*7.00+b*5.00*3+c*3.00*7);
       printf("\nThank you and have a nice day !\n\n");
	return 0;	
}
