#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	int a, x;
	printf("Nhap so ve so ban da mua:(1-999999)\n");
	scanf("%d", &a);
	srand((unsigned)time(NULL));
	x=rand() % 1000000;
	printf("Ket qua xo so hom nay la: %06d \n", x);
	if (a==x)
	printf("CHUC MUNG, ban da trung giai dac biet voi phan thuong 3 ty dong.\n");
	else if (a==(x%100000))
	printf("CHUC MUNG, ban da trung giai nhat voi phan thuong 200 trieu dong.\n");
	else if (a==(x%10000))
	printf("CHUC MUNG, ban da trung giai nhi voi phan thuong 100 trieu.\n");
	else if (a==(x%1000))
	printf("CHUC MUNG, ban da trung giai ba voi phan thuong 10 trieu.\n");
	else if (a==(x%100))
	printf("CHUC MUNG, ban da trung giai dac biet voi phan thuong 500 nghin dong.\n");
	else printf("Chuc ban may man lan sau :v\n");
}
