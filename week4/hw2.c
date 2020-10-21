#include<stdio.h>
int main ()
{
	char sch[35], name[30], pro[35];
	int i,a,b,c,e,g;
	printf("Enter name of school:\n");
	fgets(sch,35,stdin);
	printf("Enter student name:\n");
	while(getchar()!='\n')
	  fgets(name,30,stdin);
	printf("Enter promotion:\n");
	fgets(pro,35,stdin);
	printf("Enter Student ID:\n");
	scanf("%d",&i);
	printf("Enter date of birth (DD/MM/YYYY): \n");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("Enter the year begin:\n");
	scanf("%d",&g);
	printf(" _________________________________________________________________________________\n");
	printf("| %-80s|\n",sch);
	printf("| %80s|\n","THE SINH VIEN ");
	printf("| %80s|\n","Student ID card ");
	printf("|.................................................................................|\n");
	printf("| %-80s|\n","Ho ten / Name");
	printf("| %-80s|\n",name);
	printf("| %-63s%-12s%-5s|\n","","____________","");
	printf("| %-25s%55s|\n","Ngay sinh / Date of birth","|          |     ");
	printf("| %-2d/%-2d/%-d%70s|\n",a,b,c,"|          |     ");
	printf("| %80s|\n","|          |     ");
	printf("| %-50s%30s|\n",pro,"|          |     ");
	printf("| %80s|\n","|          |     ");
	printf("| %80s|\n","|          |     ");
	printf("| %80s|\n","|__________|     ");
	printf("| %-80s|\n","Gia tri den/ Vaid Thru");
	printf("| %-d%-59s%-14s%-3s|\n",g,"","MSSV / ID No.","");
	printf("| %-65s%-8d%-7s|\n","",i,"");
	printf("| %-80s|\n","");
	printf("|_________________________________________________________________________________|\n");
	
	return 0;
	
	
	
	
}

