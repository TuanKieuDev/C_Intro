#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main ()
{
	double xa, ya, xb, yb;
	double d, goc;
	printf("Enter the co-cordinate of John (x;y):\n");
	scanf("%lf%lf", &xa, &ya);
	printf("Enter the co-cordinate of Jane (x;y):\n");
	scanf("%lf%lf", &xb, &yb);
	d=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
	if (xa==xb&&ya<yb)
	printf("\nGo north %.3lf km\n", d);
	else if (xa==xb&&ya>yb)
	printf("\nGo South %.3lf km\n", d);
	else if (ya==yb&&xa<xb)
	printf("\nGo East %.3lf km\n", d);
	else if (ya==yb&&xa>xb)
	printf("\nGo West %.3lf km\n", d);
	else if (xa<xb&&ya<yb)
	{
	goc=(atan((yb-ya)/(xb-xa))/PI)*180;
	printf("\nGo North (%.1lf) East %.3lf m\n", goc, d);
	}
	else if (xa<xb&&ya>yb)
	{
	goc=(atan((ya-yb)/(xb-xa))/PI)*180;
	printf("\nGo the South (%.1lf) Eat %.3lf m\n", goc, d);
	}
	else if (xa>xb&&ya<yb)
	{
	goc=(atan((yb-ya)/(xa-xb))/PI)*180;
	printf("\nGo North (%.1lf) Weast %.3lf m\n", goc, d);
	}
	else if (xa>xb&&ya>yb)
	{
	goc=(atan((xa-xb)/(ya-yb))/PI)*180;
	printf("\nGo South (%.1lf) West %.3lf m\n", goc, d);
	}
	return 0;	
}
