#include <stdio.h>

int main()
{
  double heading;
  printf("Enter heading in degrees: ");
  scanf("%lf",&heading);
  if(heading<0) printf("Error\n");
  else if(heading<90) printf("North (%.2lf) east\n",heading);
  else if(heading<180) printf("North (%.2lf) west\n",180.0-heading);
  else if(heading<270) printf("South (%.2lf) west\n",heading-180.0);
  else if(heading<=360) printf("South (%.2lf) east\n",360.0-heading);
  else printf("Error\n");
  return 0;
}
