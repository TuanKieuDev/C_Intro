#include <stdio.h>

int main()
{
  printf("Player: Wayne Rooney\n");
  printf("Season 2009-2010\n\n");
  printf("%-50s\n","Attacking Statistics");
  printf("%-50s%-50d\n","Goals",23);
  printf("%-50s%-50f\n","Shots/Goals Ratio",0.17);
  printf("%-50s%-50f\n","Shots on Target Ratio",0.59);
  printf("%-50s\n","Defensive Statistics");
  printf("%-50s%-50f\n","Goals Conceded/Game",1.19);
  printf("%-50s%-50f\n","Shots on Target/Goals Conceded",4.41);
  printf("%-50s%-50f\n","Clean Sheets/Game",0.19);
  printf("%-50s\n","How goals Scored");
  printf("%-50s%-50d\n","Left Food",3);
  printf("%-50s%-50d\n","Right Food",15);
  printf("%-50s%-50d\n","Headers",5);
  printf("%-50s%-50d\n","Other",0);
  printf("%-50s\n","Discipline");
  printf("%-50s%-50d\n","Red Cards",0);
  printf("%-50s%-50d\n","Yellow Cards",5);
  printf("%-50s%-50d\n","Total Cards",5);
  printf("%-50s%-50d\n","Fouls",21);
  printf("%-50s%-50f\n","Fouls/Cards Ratio",0.24);
  return 0;
}
